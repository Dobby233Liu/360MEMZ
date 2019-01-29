#include "Data.h"
const unsigned char code1[] = {187, 224, 7, 142, 195, 142, 219, 184, 22, 2, 185, 2, 0, 182, 0, 187, 0, 0, 205, 19, 49, 192, 137, 195, 137, 193, 137, 194, 190, 0, 0, 191, 124, 10, 172, 129, 254, 124, 10, 115, 49, 60, 128, 115, 2, 235, 15, 36, 127, 136, 193, 172, 170, 254, 201, 128, 249, 255, 117, 247, 235, 228, 180, 0, 60, 64, 114, 5, 36, 63, 136, 196, 172, 137, 193, 173, 137, 242, 137, 254, 41, 198, 172, 170, 226, 252, 137, 214, 235, 200, 184, 19, 0, 205, 16, 187, 224, 7, 142, 219, 190, 124, 10, 180, 0, 172, 187, 0, 0, 137, 193, 186, 200, 3, 136, 216, 238, 67, 186, 201, 3, 172, 238, 172, 238, 172, 238, 226, 238, 187, 0, 160, 142, 195, 191, 0, 0, 185, 0, 125, 243, 165, 244, 235, 253};
const size_t code1_len = sizeof(code1);const unsigned char code2[] = {85, 170, 153, 255, 0, 12, 25, 0, 0, 0, 63, 38, 63, 38, 38, 38, 12, 63, 0, 0, 38, 63, 63, 63, 0, 63, 51, 38, 63, 4, 21, 0, 137, 0, 25, 12, 63, 0, 10, 21, 0, 10, 21, 4, 22, 0, 147, 3, 7, 0, 2, 5, 0, 3, 6, 0, 11, 22, 0, 10, 20, 0, 2, 4, 0, 5, 10, 4, 15, 0, 129, 3, 6, 7, 27, 0, 135, 10, 20, 0, 8, 17, 0, 7, 15, 4, 33, 0, 129, 2, 4, 4, 24, 0, 129, 5, 11, 4, 63, 0, 132, 5, 11, 0, 1, 2, 5, 45, 0, 131, 7, 0, 6, 12, 4, 15, 0, 135, 2, 4, 63, 12, 38, 0, 12, 24, 4, 39, 0, 132, 2, 5, 63, 38, 38, 4, 57, 0, 132, 11, 22, 0, 7, 14, 4, 39, 0, 132, 11, 22, 0, 0, 1, 4, 18, 0, 138, 8, 17, 0, 4, 8, 0, 1, 3, 0, 9, 19, 4, 87, 0, 135, 12, 24, 0, 8, 16, 0, 8, 16, 4, 36, 0, 129, 1, 2, 4, 27, 0, 129, 8, 16, 4, 117, 0, 129, 4, 9, 4, 48, 0, 4, 87, 0, 128, 5, 4, 99, 0, 129, 1, 3, 4, 102, 0, 129, 7, 14, 4, 48, 0, 135, 9, 18, 13, 0, 0, 12, 62, 0, 4, 15, 0, 129, 9, 18, 4, 72, 0, 6, 54, 0, 129, 4, 9, 4, 66, 0, 4, 84, 0, 146, 25, 0, 6, 12, 57, 34, 0, 24, 24, 0, 0, 32, 54, 20, 10, 51, 13, 11, 8, 4, 45, 0, 4, 33, 0, 128, 3, 4, 93, 0, 132, 0, 1, 0, 0, 0, 4, 81, 0, 4, 6, 0, 131, 13, 0, 11, 23, 4, 54, 0, 129, 9, 18, 4, 24, 0, 201, 11, 23, 11, 0, 0, 26, 0, 0, 57, 0, 0, 10, 0, 0, 28, 0, 0, 39, 0, 0, 30, 0, 0, 37, 0, 0, 35, 21, 0, 15, 9, 0, 37, 22, 0, 17, 17, 0, 26, 26, 0, 20, 20, 0, 37, 37, 37, 45, 27, 45, 0, 6, 10, 9, 5, 9, 23, 11, 58, 11, 5, 28, 15, 15, 15, 9, 4, 22, 22, 11, 56, 4, 2, 11, 4, 135, 0, 129, 9, 19, 7, 96, 0, 129, 6, 13, 7, 246, 0, 163, 6, 13, 12, 0, 0, 3, 0, 0, 3, 0, 0, 12, 0, 0, 6, 0, 0, 6, 0, 0, 52, 0, 0, 22, 0, 0, 54, 0, 0, 16, 0, 0, 29, 0, 0, 20, 5, 15, 0, 128, 56, 5, 117, 0, 131, 59, 0, 0, 17, 5, 6, 0, 128, 34, 5, 9, 0, 131, 50, 0, 0, 27, 5, 150, 0, 137, 27, 0, 0, 58, 0, 0, 46, 0, 0, 15, 5, 24, 0, 155, 31, 0, 0, 12, 7, 0, 21, 12, 0, 20, 12, 0, 11, 6, 0, 19, 11, 0, 29, 17, 0, 13, 0, 0, 38, 0, 0, 24, 5, 60, 0, 147, 14, 8, 0, 51, 30, 0, 51, 31, 0, 16, 9, 0, 23, 14, 0, 32, 19, 0, 8, 5, 4, 21, 0, 159, 22, 13, 0, 33, 20, 0, 52, 31, 0, 45, 27, 0, 6, 4, 0, 41, 24, 0, 23, 13, 0, 31, 18, 0, 7, 4, 0, 27, 16, 0, 39, 23, 4, 48, 0, 132, 27, 16, 0, 50, 30, 4, 84, 0, 135, 4, 2, 0, 58, 35, 0, 25, 15, 4, 15, 0, 132, 12, 7, 0, 28, 16, 4, 12, 0, 141, 35, 21, 0, 16, 16, 0, 55, 55, 0, 10, 10, 0, 10, 6, 4, 84, 0, 129, 14, 8, 4, 99, 0, 135, 43, 26, 0, 36, 36, 0, 57, 57, 4, 47, 1, 135, 30, 30, 0, 31, 31, 0, 46, 46, 4, 18, 0, 132, 37, 37, 0, 35, 35, 4, 65, 1, 192, 36, 36, 0, 40, 40, 0, 27, 27, 0, 34, 34, 0, 56, 56, 0, 39, 39, 0, 4, 4, 0, 5, 27, 0, 6, 34, 0, 9, 46, 0, 3, 19, 0, 54, 54, 0, 6, 6, 0, 6, 6, 0, 12, 12, 0, 6, 6, 6, 4, 4, 4, 5, 28, 0, 7, 39, 0, 1, 5, 0, 8, 42, 0, 6, 32, 4, 12, 0, 142, 5, 27, 0, 0, 20, 33, 0, 8, 13, 0, 6, 11, 0, 4, 7, 4, 101, 1, 4, 213, 1, 132, 77, 57, 0, 25, 78, 5, 10, 0, 136, 0, 0, 41, 92, 0, 0, 0, 57, 47, 7, 14, 0, 131, 0, 0, 0, 26, 4, 248, 1, 132, 13, 13, 0, 13, 13, 5, 15, 0, 129, 63, 18, 10, 27, 0, 10, 10, 0, 14, 14, 0, 132, 36, 12, 0, 27, 31, 7, 12, 0, 134, 28, 16, 0, 0, 0, 32, 14, 10, 29, 0, 129, 48, 58, 5, 7, 0, 138, 13, 18, 21, 22, 16, 12, 0, 0, 79, 93, 17, 5, 16, 0, 136, 21, 14, 23, 36, 16, 14, 14, 23, 45, 19, 80, 0, 132, 16, 12, 0, 58, 37, 7, 12, 0, 129, 94, 64, 4, 80, 0, 128, 21, 10, 29, 0, 129, 38, 26, 7, 80, 0, 129, 15, 95, 4, 80, 0, 129, 0, 30, 6, 80, 0, 136, 32, 32, 46, 32, 32, 32, 32, 65, 59, 18, 79, 0, 150, 33, 27, 0, 49, 29, 15, 39, 66, 66, 39, 20, 0, 50, 96, 19, 15, 29, 28, 18, 24, 15, 29, 34, 4, 105, 0, 145, 97, 50, 42, 15, 29, 34, 34, 29, 98, 0, 0, 18, 30, 0, 23, 50, 99, 19, 5, 40, 0, 128, 38, 9, 60, 0, 128, 35, 18, 80, 0, 133, 130, 80, 47, 0, 81, 82, 4, 10, 0, 131, 31, 67, 0, 42, 4, 70, 0, 128, 28, 4, 6, 0, 128, 19, 4, 213, 0, 136, 49, 0, 0, 20, 26, 0, 0, 51, 20, 4, 80, 0, 128, 26, 5, 160, 0, 7, 54, 0, 128, 131, 6, 7, 0, 129, 82, 81, 17, 80, 0, 138, 45, 39, 77, 37, 31, 0, 0, 132, 57, 133, 100, 5, 177, 2, 130, 0, 14, 38, 4, 77, 1, 4, 10, 0, 147, 22, 101, 0, 0, 33, 45, 0, 0, 45, 31, 0, 0, 25, 43, 48, 68, 17, 0, 18, 52, 4, 248, 2, 7, 31, 0, 4, 160, 0, 128, 27, 16, 79, 0, 132, 25, 65, 53, 47, 102, 4, 70, 0, 5, 24, 1, 128, 24, 4, 70, 0, 130, 134, 32, 67, 6, 10, 0, 150, 16, 69, 36, 23, 21, 14, 14, 14, 14, 33, 0, 0, 18, 21, 0, 23, 12, 135, 46, 48, 52, 24, 17, 4, 111, 0, 135, 70, 16, 14, 22, 30, 21, 16, 43, 4, 59, 0, 13, 80, 0, 152, 42, 25, 60, 27, 0, 49, 14, 0, 30, 17, 54, 0, 0, 0, 61, 61, 19, 15, 70, 28, 0, 71, 33, 0, 136, 4, 133, 0, 135, 103, 25, 25, 35, 72, 25, 25, 72, 4, 80, 0, 137, 43, 0, 16, 12, 34, 0, 46, 23, 78, 17, 4, 174, 1, 135, 70, 55, 55, 79, 55, 55, 55, 55, 19, 223, 1, 140, 38, 27, 0, 25, 14, 0, 22, 17, 17, 14, 0, 0, 104, 5, 64, 1, 132, 0, 56, 33, 0, 83, 7, 64, 1, 145, 37, 26, 0, 0, 26, 37, 0, 0, 18, 42, 15, 19, 12, 99, 0, 73, 23, 64, 4, 40, 0, 4, 0, 4, 24, 127, 2, 129, 35, 72, 4, 24, 4, 132, 22, 17, 17, 82, 95, 4, 9, 0, 4, 80, 0, 8, 144, 1, 136, 27, 26, 51, 62, 31, 26, 26, 31, 48, 5, 224, 1, 137, 14, 12, 29, 73, 35, 59, 29, 17, 22, 0, 5, 74, 4, 6, 62, 0, 128, 74, 17, 80, 0, 140, 20, 47, 92, 65, 0, 0, 36, 28, 0, 84, 35, 0, 43, 4, 74, 1, 128, 49, 4, 22, 0, 4, 10, 0, 151, 22, 62, 80, 80, 16, 36, 53, 53, 23, 33, 56, 85, 25, 21, 0, 69, 32, 43, 74, 81, 0, 65, 46, 36, 10, 144, 1, 9, 9, 0, 11, 80, 0, 129, 60, 47, 4, 165, 1, 138, 14, 17, 0, 46, 103, 0, 24, 14, 36, 69, 19, 5, 160, 0, 4, 144, 1, 128, 56, 4, 14, 1, 134, 63, 0, 0, 105, 79, 23, 12, 4, 128, 2, 128, 12, 4, 21, 0, 128, 0, 5, 240, 0, 5, 10, 0, 8, 40, 0, 15, 160, 0, 4, 223, 4, 129, 137, 21, 5, 224, 1, 132, 61, 12, 12, 17, 30, 4, 64, 1, 129, 16, 51, 8, 238, 2, 5, 32, 3, 150, 22, 12, 18, 43, 0, 22, 12, 50, 19, 15, 39, 34, 34, 16, 13, 0, 0, 63, 19, 15, 24, 54, 83, 4, 15, 0, 16, 79, 0, 129, 11, 53, 4, 159, 0, 130, 48, 56, 71, 5, 15, 4, 4, 4, 0, 131, 0, 71, 0, 86, 6, 182, 3, 4, 4, 0, 146, 30, 34, 34, 29, 15, 39, 12, 54, 41, 31, 39, 12, 41, 41, 85, 41, 41, 12, 23, 29, 14, 4, 129, 57, 20, 4, 215, 0, 6, 129, 1, 7, 19, 0, 11, 11, 0, 34, 78, 4, 17, 17, 0, 129, 46, 85, 5, 7, 0, 4, 33, 2, 132, 0, 70, 54, 24, 20, 6, 20, 4, 56, 78, 0, 161, 34, 29, 15, 19, 12, 49, 106, 75, 138, 139, 140, 141, 107, 8, 50, 0, 59, 35, 73, 96, 104, 24, 75, 106, 142, 143, 8, 8, 8, 8, 1, 1, 1, 1, 4, 4, 0, 8, 8, 0, 5, 11, 7, 27, 78, 0, 4, 52, 0, 145, 144, 145, 146, 108, 147, 8, 8, 109, 8, 110, 148, 8, 109, 8, 111, 149, 150, 151, 4, 22, 0, 4, 4, 0, 133, 8, 1, 7, 7, 7, 7, 4, 4, 0, 8, 8, 0, 128, 7, 31, 81, 0, 4, 53, 0, 150, 107, 152, 112, 153, 154, 8, 8, 75, 155, 156, 8, 8, 75, 8, 111, 157, 158, 112, 110, 159, 160, 161, 162, 7, 79, 0, 131, 2, 2, 2, 2, 4, 4, 0, 5, 5, 0, 33, 81, 0, 158, 8, 8, 8, 163, 164, 165, 166, 108, 167, 168, 169, 170, 171, 172, 9, 9, 173, 8, 174, 175, 8, 113, 113, 176, 114, 177, 178, 9, 9, 9, 1, 8, 79, 0, 131, 40, 2, 2, 40, 7, 81, 0, 30, 80, 0, 153, 9, 9, 179, 180, 181, 182, 183, 87, 184, 185, 186, 187, 188, 115, 9, 9, 189, 9, 190, 191, 9, 9, 9, 9, 192, 114, 4, 6, 0, 129, 1, 7, 8, 72, 0, 131, 2, 2, 1, 1, 6, 81, 0, 129, 1, 0, 28, 69, 1, 152, 9, 9, 193, 9, 194, 195, 9, 87, 196, 197, 116, 9, 198, 199, 9, 9, 200, 201, 116, 202, 9, 9, 203, 204, 205, 4, 79, 0, 5, 80, 0, 8, 79, 0, 130, 3, 3, 1, 4, 92, 0, 129, 7, 1, 4, 10, 0, 27, 80, 0, 155, 9, 9, 206, 207, 9, 87, 208, 6, 117, 209, 210, 6, 6, 6, 211, 212, 213, 214, 9, 215, 115, 9, 6, 6, 6, 6, 6, 6, 14, 80, 0, 128, 3, 4, 162, 0, 128, 7, 5, 9, 0, 25, 80, 0, 4, 54, 0, 144, 118, 216, 6, 217, 218, 6, 219, 220, 88, 6, 6, 6, 88, 6, 221, 222, 223, 4, 9, 0, 130, 1, 1, 224, 10, 80, 0, 128, 40, 6, 80, 0, 128, 3, 4, 49, 2, 5, 8, 0, 29, 80, 0, 136, 225, 226, 6, 119, 227, 6, 228, 229, 119, 6, 149, 0, 132, 6, 117, 230, 6, 6, 4, 213, 0, 17, 160, 0, 4, 75, 0, 5, 5, 0, 31, 160, 0, 138, 231, 6, 232, 4, 233, 234, 4, 235, 236, 4, 4, 4, 16, 0, 134, 237, 238, 239, 240, 1, 241, 242, 4, 141, 0, 4, 80, 0, 5, 145, 1, 13, 79, 0, 27, 81, 0, 142, 4, 4, 4, 4, 243, 244, 245, 76, 246, 247, 4, 4, 4, 248, 249, 4, 15, 0, 138, 4, 4, 76, 76, 76, 4, 1, 120, 120, 3, 3, 9, 160, 0, 128, 40, 4, 80, 0, 128, 13, 6, 85, 0, 4, 7, 0, 29, 80, 0, 6, 69, 0, 10, 10, 0, 6, 6, 0, 5, 200, 1, 128, 7, 8, 47, 2, 5, 134, 1, 5, 5, 0, 5, 7, 0, 33, 80, 0, 131, 5, 5, 5, 5, 4, 4, 0, 12, 16, 0, 7, 240, 0, 7, 80, 0, 129, 44, 44, 9, 238, 0, 129, 44, 44, 25, 80, 0, 8, 72, 0, 8, 8, 0, 14, 14, 0, 7, 80, 0, 5, 223, 1, 130, 44, 44, 3, 4, 153, 0, 4, 162, 0, 30, 80, 0, 169, 250, 251, 252, 253, 89, 5, 5, 89, 254, 19, 26, 5, 5, 5, 89, 252, 0, 5, 5, 253, 65, 250, 78, 15, 15, 250, 86, 1, 242, 242, 126, 40, 126, 242, 241, 121, 123, 123, 1, 242, 241, 241, 7, 99, 4, 28, 224, 1, 168, 5, 5, 89, 78, 5, 5, 5, 122, 10, 90, 127, 90, 10, 90, 125, 10, 89, 251, 5, 250, 250, 5, 89, 122, 125, 127, 129, 10, 10, 1, 1, 7, 120, 120, 126, 2, 123, 123, 121, 123, 121, 5, 66, 1, 128, 241, 32, 47, 2, 152, 13, 10, 10, 124, 125, 10, 10, 125, 125, 10, 125, 90, 10, 10, 10, 10, 10, 129, 10, 10, 10, 127, 124, 90, 129, 4, 80, 0, 142, 1, 126, 1, 1, 91, 7, 7, 7, 91, 91, 120, 91, 120, 7, 7, 36, 4, 5, 128, 13, 4, 68, 0, 129, 125, 127, 4, 83, 0, 130, 90, 127, 127, 8, 80, 0, 128, 128, 5, 80, 0, 131, 1, 3, 126, 91, 17, 79, 5, 128, 1, 27, 157, 0, 4, 4, 0, 4, 80, 0, 140, 124, 90, 129, 10, 0, 20, 19, 45, 74, 14, 0, 0, 21, 4, 84, 0, 138, 128, 90, 129, 20, 86, 54, 1, 3, 126, 1, 18, 4, 45, 1, 133, 61, 51, 21, 65, 26, 0, 4, 15, 0, 128, 0, 29, 60, 1, 4, 197, 10, 7, 11, 0, 135, 61, 0, 31, 52, 0, 0, 45, 86, 4, 35, 12, 140, 0, 16, 28, 18, 68, 38, 27, 34, 1, 1, 1, 59, 0, 4, 222, 0, 132, 97, 11, 43, 37, 26, 5, 10, 0, 128, 0, 6, 6, 0, 30, 163, 5, 4, 58, 11, 131, 29, 0, 60, 52, 5, 47, 14, 6, 0, 10, 150, 18, 30, 35, 72, 42, 0, 0, 93, 84, 0, 0, 73, 64, 0, 42, 11, 68, 20, 51, 0, 0, 37, 71, 5, 188, 12, 29, 76, 0, 155, 13, 0, 0, 46, 23, 0, 0, 67, 37, 0, 58, 60, 105, 41, 20, 51, 0, 37, 67, 0, 26, 20, 57, 25, 16, 20, 77, 15, 6, 221, 9, 137, 27, 60, 0, 15, 12, 30, 33, 45, 0, 25, 4, 89, 11, 18, 93, 8, 17, 80, 0, 138, 0, 38, 53, 23, 98, 0, 0, 0, 84, 62, 62, 4, 216, 7, 157, 100, 23, 20, 28, 0, 22, 21, 20, 47, 24, 62, 52, 68, 22, 36, 36, 35, 74, 48, 19, 11, 30, 38, 22, 25, 22, 19, 53, 69, 14, 18, 93, 8, 19, 85, 0, 129, 12, 11, 6, 40, 8, 7, 7, 0, 128, 28, 4, 11, 0, 128, 105, 4, 15, 0, 132, 12, 11, 11, 11, 11, 4, 9, 0, 129, 11, 101, 4, 7, 0, 4, 15, 0, 61, 233, 7, 61, 61, 0, 64, 122, 122, 0, 64, 147, 147, 0, 8, 248, 2, 64, 80, 80, 0, 64, 71, 78, 0, 9, 94, 14, 64, 230, 240, 0, 65, 135, 21, 3};
const size_t code2_len = sizeof(code2);