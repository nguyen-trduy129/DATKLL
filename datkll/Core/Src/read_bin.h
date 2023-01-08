/*
 * read_bin.h
 *
 *  Created on: Jan 8, 2023
 *      Author: duyvt
 */

#ifndef SRC_READ_BIN_H_
#define SRC_READ_BIN_H_

#include <stdio.h>
#include <stdlib.h>

#define IMAGE_WIDTH 640
#define IMAGE_HEIGHT 480

// Define a 2D array to store the image data
uint8_t image[IMAGE_HEIGHT][IMAGE_WIDTH];

int main(void)
{
  // Open the image file for reading
  FILE *image_file = fopen("image.bin", "rb");
  if (image_file == NULL)
  {
    printf("Error opening image file\n");
    return 1;
  }

  // Read the image data from the file into the image array
  size_t read_count = fread(image, sizeof(uint8_t), IMAGE_WIDTH * IMAGE_HEIGHT, image_file);
  if (read_count != IMAGE_WIDTH * IMAGE_HEIGHT)
  {
    printf("Error reading image data\n");
    return 1;
  }

  // Close the image file
  fclose(image_file);

  // Process the image data as needed...

  return 0;
}



#endif /* SRC_READ_BIN_H_ */
