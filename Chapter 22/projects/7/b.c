#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Usage: %s [FILE.rle]\n", argv[1]);
    exit(EXIT_FAILURE);
  }

  char *dot = strrchr(argv[1], '.');
  if (dot == NULL || (strcmp(dot, ".rle") != 0)) {
    printf("File must be of type .rle\n");
    exit(EXIT_FAILURE);
  }

  FILE *inputFile = fopen(argv[1], "rb");
  if (inputFile == NULL) {
    printf("Error: Couldn't open file <%s>\n", argv[1]);
    exit(EXIT_FAILURE);
  }

  char *name = malloc(strlen(argv[1]) - 4);

  char *tmp = strrchr(argv[1], '.');
  *tmp = '\0';
  strcpy(name, argv[1]);

  // printf("%s\n", name);
  FILE *outputFile = fopen(name, "wb");
  if (outputFile == NULL) {
    printf("Error: Couldn't create output file\n");
    free(name);
    exit(EXIT_FAILURE);
  }

  free(name);

  size_t line;
  char buffer;
  int counter = 0;

  while ((line = fread(&buffer, 1, 1, inputFile)) > 0) {

    if ((counter % 2) == 0) {
      char number = buffer;

      line = fread(&buffer, 1, 1, inputFile);

      for (int i = 0; i < number; i++) {
        fwrite(&buffer, 1, 1, outputFile);
      }

      counter = 0;
    } else {
      counter++;
    }
  }

  fclose(inputFile);
  fclose(outputFile);

  return 0;
}