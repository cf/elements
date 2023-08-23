#include "ctx8Pruned.h"

/* A length-prefixed encoding of the following Simplicity program:
 *     (scribe (toWord256 0x067C531269735CA7F541FDACA8F0DC76305D3CADA140F89372A410FE5EFF6E4D) &&&
 *      (ctx8Init &&& scribe (toWord128 0xDE188941A3375D3A8A061E67576E926D)) >>> ctx8Addn vector16 >>> ctx8Finalize) >>>
 *     eq >>> verify
 */
const unsigned char ctx8Pruned[] = {
  0xeb, 0x11, 0xe9, 0x20, 0x40, 0x82, 0xe0, 0x2c, 0x02, 0x98, 0x8a, 0x05, 0x88, 0x58, 0xe2, 0x2c, 0x42, 0x9a, 0x45, 0x02,
  0xc4, 0x2d, 0x3a, 0x45, 0xb7, 0x21, 0x40, 0xb7, 0xec, 0x17, 0x00, 0xd8, 0x28, 0x16, 0x01, 0x68, 0x0b, 0x80, 0x70, 0x11,
  0x70, 0x00, 0xb7, 0x69, 0x14, 0x0b, 0x66, 0xf1, 0x70, 0x5e, 0x0a, 0x27, 0x02, 0x15, 0x0b, 0x10, 0xb5, 0x05, 0xc1, 0xf8,
  0x38, 0x9c, 0x0c, 0x5c, 0x37, 0x88, 0x04, 0xe0, 0x42, 0xa1, 0x70, 0xce, 0x20, 0x16, 0x41, 0x6c, 0xe1, 0x82, 0x81, 0x62,
  0x17, 0x12, 0x71, 0x40, 0xb8, 0x00, 0x5b, 0x38, 0xa4, 0x50, 0x2d, 0x3c, 0x46, 0x2e, 0x25, 0xe2, 0x81, 0x40, 0xb0, 0x0b,
  0x48, 0x5c, 0x10, 0x2e, 0x25, 0xe3, 0x11, 0x71, 0x3f, 0x00, 0x14, 0x0b, 0x8a, 0x38, 0xb0, 0x5c, 0x37, 0x81, 0x8a, 0x05,
  0x80, 0x5c, 0x41, 0xc5, 0x42, 0xe1, 0x5c, 0x72, 0x28, 0x17, 0x0e, 0xe0, 0x82, 0xe2, 0x9e, 0x30, 0x14, 0x0b, 0x00, 0xb4,
  0x05, 0xc7, 0x3c, 0x62, 0x2e, 0x29, 0xe2, 0x21, 0x40, 0xb8, 0xd7, 0x90, 0x62, 0xe3, 0xee, 0x40, 0x8b, 0x8a, 0x02, 0xa1,
  0x62, 0x17, 0x1e, 0xe0, 0x2e, 0x2c, 0xe2, 0xc1, 0x40, 0xb9, 0x0f, 0x98, 0xb8, 0xb7, 0x8a, 0x85, 0x02, 0xc0, 0x2d, 0x01,
  0x70, 0x10, 0xb8, 0x84, 0x4e, 0x4a, 0x93, 0x92, 0xc4, 0xe4, 0xb9, 0x39, 0x30, 0x4e, 0x4c, 0x8a, 0x05, 0x80, 0x59, 0x05,
  0xa0, 0x2e, 0x4e, 0x85, 0xc9, 0xce, 0x4e, 0x08, 0x10, 0x20, 0x5c, 0x9c, 0xe4, 0x40, 0xb9, 0x43, 0xc8, 0xe1, 0x40, 0xb8,
  0x7f, 0x27, 0xc5, 0xca, 0x0e, 0x4e, 0x8a, 0x05, 0x80, 0x5c, 0xa4, 0xe5, 0x08, 0x81, 0x31, 0x17, 0x24, 0xb8, 0x98, 0x5c,
  0x84, 0xe5, 0x00, 0xa0, 0x58, 0x05, 0xa0, 0x2e, 0x3b, 0xe2, 0x41, 0x72, 0x4f, 0x94, 0x82, 0x71, 0x88, 0xa8, 0x5c, 0x9b,
  0xe5, 0x40, 0xb9, 0x2b, 0xc9, 0x71, 0x40, 0xb9, 0x55, 0xc9, 0xe1, 0x72, 0x64, 0x2a, 0x16, 0x61, 0x6c, 0x0b, 0x96, 0x1c,
  0xad, 0x17, 0x2f, 0x38, 0xe0, 0x50, 0x2e, 0x59, 0xf2, 0xbc, 0x5c, 0xb8, 0xe5, 0x10, 0xa0, 0x58, 0x05, 0xca, 0xfe, 0x16,
  0x2e, 0x60, 0xf9, 0x70, 0x28, 0x17, 0x30, 0x3c, 0x9e, 0x17, 0x27, 0xf9, 0x7c, 0x28, 0x16, 0x01, 0x68, 0x0b, 0x97, 0x9c,
  0xad, 0x17, 0x29, 0x39, 0x7e, 0x28, 0x17, 0x2a, 0xf9, 0x74, 0x2e, 0x5b, 0x71, 0x38, 0xa0, 0x58, 0x05, 0xcc, 0x37, 0x15,
  0x0b, 0x91, 0xdc, 0xc9, 0x0a, 0x05, 0xcc, 0x67, 0x2c, 0x85, 0xcc, 0x3f, 0x30, 0x42, 0x81, 0x60, 0x16, 0x80, 0xb8, 0x00,
  0x5c, 0x40, 0x17, 0x1e, 0x05, 0xc8, 0x10, 0xb9, 0x77, 0xc9, 0x91, 0x73, 0x21, 0xcb, 0x71, 0x40, 0xb9, 0x73, 0xcc, 0x68,
  0x9c, 0xc0, 0x8a, 0x85, 0xcc, 0x5f, 0x32, 0xe2, 0xe6, 0x63, 0x99, 0xd1, 0x40, 0xb9, 0x69, 0xc6, 0x02, 0x81, 0x64, 0x17,
  0x30, 0x5c, 0xc8, 0x89, 0xcd, 0x28, 0xb9, 0x9d, 0xe5, 0x38, 0x9c, 0x88, 0x15, 0x0b, 0x9a, 0x3e, 0x69, 0xc4, 0xe5, 0x20,
  0xb9, 0x9d, 0xe6, 0x84, 0x5c, 0xd6, 0xf3, 0x1e, 0x28, 0x16, 0x01, 0x66, 0x16, 0xd0, 0xb8, 0x51, 0x06, 0x20, 0xc3, 0x85,
  0x80, 0xd9, 0x20, 0xc3, 0x85, 0x80, 0xda, 0xd0, 0x61, 0xc2, 0xc0, 0x6e, 0x00, 0x83, 0x0e, 0x16, 0x04, 0x18, 0x61, 0xf3,
  0x14, 0x20, 0xe3, 0x0f, 0xb0, 0x50, 0x83, 0x8c, 0x3f, 0x01, 0x14, 0x20, 0xe3, 0x0f, 0xc1, 0x85, 0x08, 0x38, 0xc3, 0xf0,
  0xb1, 0x42, 0x0e, 0x30, 0xfc, 0x40, 0x28, 0x3f, 0x11, 0x14, 0x51, 0x38, 0xa8, 0x30, 0x0c, 0x88, 0x30, 0xc1, 0x60, 0x3e,
  0x06, 0xe3, 0x21, 0x41, 0xf8, 0xd0, 0xa4, 0x90, 0x2a, 0x28, 0x9c, 0x7e, 0x18, 0x06, 0x91, 0xf8, 0x01, 0xb8, 0x60, 0xa0,
  0xa0, 0xe2, 0x07, 0x02, 0x03, 0x88, 0x88, 0x30, 0xc1, 0x60, 0x3e, 0x06, 0xe4, 0x70, 0xa0, 0xfc, 0x90, 0x29, 0x24, 0x12,
  0x0a, 0x05, 0x88, 0xa2, 0x72, 0x74, 0x30, 0x0d, 0x63, 0xf0, 0x23, 0x71, 0xd0, 0xa0, 0xa0, 0xe2, 0x07, 0x04, 0x03, 0x90,
  0x04, 0x18, 0x60, 0xb0, 0x1f, 0x03, 0x72, 0xb0, 0x50, 0x7e, 0x57, 0x14, 0x92, 0x09, 0x09, 0x45, 0x02, 0xc0, 0x2c, 0xc5,
  0x20, 0x80, 0xd0, 0x37, 0x0f, 0xc1, 0x4d, 0xc9, 0xb1, 0x41, 0x41, 0xc4, 0x0e, 0x0e, 0x07, 0x28, 0x48, 0x30, 0xc1, 0x60,
  0x3e, 0x06, 0xe0, 0x02, 0x83, 0xf0, 0x22, 0x92, 0x41, 0x21, 0x29, 0x30, 0x14, 0x0b, 0x00, 0xb2, 0x0b, 0x48, 0xa6, 0xcc,
  0x9e, 0xfa, 0x1e, 0x4b, 0x5a, 0x5e, 0x86, 0x7d, 0x1b, 0x11, 0x1b, 0xf2, 0x47, 0x69, 0x7d, 0x91, 0xf4, 0xe1, 0x61, 0xdd,
  0x81, 0x4d, 0xeb, 0xf9, 0x09, 0x2b, 0x07, 0x34, 0xd3, 0x3c, 0xa8, 0x0c, 0x03, 0x78, 0xfc, 0x18, 0xdc, 0xbd, 0x14, 0x14,
  0x1c, 0x40, 0xe1, 0x00, 0x73, 0x06, 0x41, 0x86, 0x0b, 0x03, 0x38, 0xfd, 0xc8, 0x56, 0xd6, 0x5d, 0xa2, 0x4b, 0x89, 0xd0,
  0xaf, 0xbc, 0x74, 0xbc, 0x4b, 0x84, 0x97, 0xdc, 0xd0, 0xb6, 0x6c, 0xf4, 0x2f, 0x92, 0xa9, 0x79, 0xa4, 0xe3, 0xcb, 0x27,
  0x38, 0xff, 0x1f, 0x13, 0x73, 0x1c, 0x28, 0x28, 0x38, 0x81, 0x98, 0x1c, 0xca, 0x10, 0x71, 0x82, 0xc0, 0xc0, 0x27, 0x68,
  0x1c, 0x64, 0x4e, 0xaf, 0xb0, 0xbf, 0x46, 0xd9, 0x04, 0x6e, 0x09, 0x29, 0x79, 0xf6, 0x17, 0x64, 0x26, 0xf6, 0x39, 0x2f,
  0x9b, 0x80, 0x77, 0xca, 0x03, 0x6b, 0xcf, 0x00, 0xf6, 0x81, 0x73, 0x66, 0x6e, 0x6c, 0x8e, 0x48, 0xba, 0x11, 0xfa, 0x1b,
  0x85, 0xd0, 0x26, 0x13, 0xa0, 0x4c, 0x4e, 0x81, 0x30, 0x62, 0x16, 0x64, 0x90, 0x27, 0x21, 0x4d, 0xc3, 0x92, 0x28, 0x3f,
  0x43, 0xc9, 0xfa, 0x1f, 0x43, 0x00, 0xc0, 0x7e, 0x71, 0x52, 0x2e, 0x27, 0x01, 0x89, 0x87, 0x82, 0x83, 0x0f, 0x05, 0x06,
  0x1e, 0x0a, 0x0c, 0x3c, 0x14, 0x18, 0x78, 0x28, 0x30, 0xf0, 0x50, 0x0e, 0x0c, 0x17, 0x3b, 0x63, 0x85, 0xc2, 0x86, 0xe7,
  0x64, 0xfc, 0xed, 0x0a, 0x0e, 0x3f, 0x3b, 0xc6, 0x1e, 0x0a, 0x0e, 0x17, 0x15, 0x0d, 0xce, 0xf1, 0xf9, 0xdf, 0x14, 0x1c,
  0x6e, 0x46, 0x9f, 0x9e, 0x43, 0x0f, 0x05, 0x07, 0x0b, 0x21, 0xb9, 0xe4, 0x3f, 0x3c, 0xa2, 0x83, 0x8d, 0xc9, 0x83, 0xf3,
  0xd4, 0x61, 0xe0, 0xa0, 0xe1, 0x64, 0x41, 0x86, 0x1e, 0x0a, 0x0e, 0x37, 0x29, 0x4f, 0x99, 0x87, 0x82, 0x83, 0x85, 0x91,
  0x06, 0x18, 0x78, 0x28, 0x38, 0xdc, 0xb2, 0x3e, 0x66, 0x1e, 0x0a, 0x0e, 0x16, 0x43, 0x72, 0xe4, 0xc3, 0xc1, 0x41, 0xc6,
  0xe5, 0xf1, 0xf9, 0x7e, 0x61, 0xe0, 0xa0, 0xe1, 0x64, 0x27, 0x27, 0xce, 0x3f, 0x30, 0xe1, 0x83, 0x8b, 0xca, 0x43, 0x83,
  0x88, 0xe0, 0xe2, 0x3f, 0x29, 0xc3, 0xa4, 0x70, 0x6e, 0xb3, 0x83, 0x42, 0xcc, 0x0e, 0x04, 0x17, 0x0a, 0x0b, 0x86, 0xf1,
  0x58, 0x18, 0x0b, 0x84, 0x8f, 0xc4, 0x47, 0xe1, 0xa6, 0xe6, 0x74, 0x50, 0x2c, 0x00, 0xc8, 0x0d, 0x40, 0x71, 0x50, 0x5c,
  0x64, 0x3f, 0x1c, 0x1c, 0x7d, 0x26, 0xe4, 0x40, 0xa0, 0x0d, 0x02, 0xc4, 0x7d, 0xc7, 0xd0, 0x6e, 0x40, 0x8a, 0x05, 0x80,
  0x19, 0x01, 0xb8, 0x0e, 0x43, 0x85, 0xc8, 0xf1, 0xf9, 0x2a, 0x71, 0xf8, 0xe0, 0xdd, 0x09, 0x02, 0x80, 0x34, 0x0b, 0x11,
  0xf8, 0xf4, 0xfa, 0x0d, 0xc9, 0xe1, 0x40, 0xb0, 0x03, 0x20, 0x37, 0x01, 0xca, 0x40, 0xb9, 0x58, 0x3f, 0x42, 0xa9, 0xc7,
  0xe4, 0xa1, 0xba, 0x17, 0x45, 0x00, 0x68, 0x16, 0x23, 0xf2, 0x64, 0xfa, 0x0d, 0xd0, 0xbc, 0x28, 0x16, 0x00, 0x64, 0x06,
  0xe0, 0x39, 0x7e, 0x17, 0x30, 0xe3, 0xf4, 0x35, 0x1c, 0x7e, 0x58, 0x9b, 0xa1, 0xc8, 0x50, 0x06, 0x81, 0x62, 0x3f, 0x2d,
  0x8f, 0xa0, 0xdd, 0x0e, 0x62, 0x81, 0x60, 0x06, 0x40, 0x6e, 0x03, 0x99, 0xa0, 0xb9, 0xa1, 0x1f, 0xa1, 0xfc, 0xe3, 0xf3,
  0x1c, 0x6e, 0x88, 0x71, 0x40, 0x1a, 0x05, 0x88, 0xfc, 0xc9, 0x9f, 0x41, 0xba, 0x22, 0x05, 0x02, 0xc0, 0x0c, 0x80, 0xdc,
  0x48, 0xb9, 0xa6, 0x01, 0xce, 0x89, 0xfa, 0x25, 0x45, 0x00, 0xc8, 0x0e, 0x6e, 0x80, 0xe7, 0x70, 0x07, 0x35, 0xa0, 0xe7,
  0x84, 0x27, 0x3d, 0x0c, 0x4e, 0xda, 0x0d, 0x40, 0xda, 0x55, 0x6d, 0xfc, 0x74, 0x67, 0xbc, 0x8d, 0x00, 0x5b, 0xdc, 0x1c,
  0xe9, 0xd5, 0x8c, 0xf2, 0xa9, 0x61, 0x3c, 0x55, 0x7c, 0x94, 0xb4, 0x3b, 0x4c, 0x5f, 0x9f, 0x96, 0x83, 0x03, 0x40, 0xc4,
  0x27, 0x45, 0x21, 0xfa, 0x29, 0x41, 0x00, 0xe7, 0xd0, 0x0e, 0x7d, 0xc0, 0xe8, 0x95, 0x1f, 0x9a, 0xf1, 0x40, 0x18, 0x03,
  0xa2, 0x78, 0x7e, 0x6f, 0x85, 0x00, 0x60, 0x0e, 0x8a, 0x71, 0xf9, 0xcd, 0x14, 0x01, 0x80, 0x3a, 0x2c, 0x07, 0xe7, 0xbc,
  0x50, 0x06, 0x00, 0xe0, 0xdd, 0x21, 0x14, 0x1c, 0x70, 0xb0, 0x0b, 0xa2, 0xa0, 0x2e, 0x80, 0x8e, 0x90, 0xd0, 0x9d, 0x21,
  0xa1, 0x3a, 0x43, 0x40, 0xe8, 0x0c, 0x0b, 0x12, 0x45, 0xd1, 0x2e, 0x37, 0x48, 0x81, 0xa6, 0xe6, 0xa0, 0x2c, 0xec, 0x54,
  0xf2, 0xee, 0x4d, 0xae, 0xb0, 0x46, 0xb5, 0x4f, 0x7e, 0xb7, 0xcc, 0xe1, 0xb8, 0xb0, 0x86, 0xf0, 0x14, 0x8c, 0xce, 0x9a,
  0xab, 0x2e, 0x14, 0x7e, 0x7f, 0xc2, 0x43, 0x00, 0xc0, 0x70, 0xba, 0x24, 0x46, 0xe9, 0x13, 0x0b, 0xa2, 0x34, 0xdb, 0x7f,
  0xdf, 0x9f, 0x8e, 0xf2, 0xd5, 0x9f, 0x90, 0xd6, 0x86, 0xb8, 0x3f, 0x03, 0xdb, 0x14, 0x2c, 0xbb, 0x56, 0x4c, 0x93, 0xb8,
  0x91, 0x61, 0xe6, 0xbf, 0x06, 0x4c, 0x8f, 0x0d, 0x1f, 0x6b, 0xc1, 0x80, 0x62, 0x38, 0x5d, 0x10, 0x23, 0x74, 0x8b, 0x05,
  0xd0, 0xfa, 0x0b, 0x30, 0x60, 0x38, 0x5d, 0x0d, 0xc6, 0x6e, 0x10, 0x85, 0x97, 0xc4, 0x56, 0x5c, 0x4d, 0x18, 0x13, 0x1c,
  0xe5, 0x26, 0x16, 0x49, 0x62, 0x61, 0xc0, 0x0c, 0xa8, 0xd4, 0xfc, 0x3d, 0xe2, 0x36, 0x8f, 0x28, 0x32, 0x43, 0x32, 0x89,
  0x72, 0x0b, 0xa1, 0x80, 0x14, 0x70, 0xba, 0x15, 0xcd, 0x05, 0x9c, 0x35, 0x5b, 0x67, 0xbe, 0x86, 0xb9, 0xb6, 0x9d, 0x4f,
  0xad, 0x48, 0x3c, 0x7b, 0x45, 0xe5, 0x89, 0xeb, 0x5a, 0xa1, 0x0b, 0x1f, 0x76, 0x67, 0x7f, 0x4c, 0xed, 0x48, 0x2d, 0xe8,
  0x88, 0x17, 0x12, 0x82, 0x8e, 0x17, 0x41, 0xf8, 0xfc, 0x52, 0x2e, 0x91, 0xe7, 0x48, 0xf0, 0x41, 0x82, 0xc0, 0x17, 0x0a,
  0x06, 0x63, 0x04, 0xe2, 0xf0, 0x71, 0xc0, 0x1c, 0x54, 0x49, 0x02, 0x0d, 0xd2, 0xaa, 0x60, 0x71, 0x37, 0xf6, 0xbe, 0xf8,
  0xec, 0xc7, 0x24, 0xe2, 0x56, 0xcf, 0x23, 0xec, 0xd5, 0xa4, 0x46, 0x08, 0x7e, 0x06, 0x08, 0x3e, 0xa7, 0x20, 0xd0, 0x37,
  0x78, 0x87, 0x33, 0x43, 0xcb, 0x62, 0x10, 0xc0, 0x3a, 0x0a, 0xc6, 0x24, 0x5d, 0x0e, 0x46, 0xb9, 0x16, 0x7f, 0xc3, 0x6a,
  0x48, 0xf4, 0xa6, 0xd3, 0xc2, 0x07, 0x47, 0x05, 0xc5, 0x5d, 0x00, 0x23, 0x09, 0x95, 0x59, 0xaa, 0x4e, 0x1a, 0x15, 0x9c,
  0x45, 0x12, 0xe6, 0x6c, 0xe2, 0x05, 0x12, 0x2f, 0x41, 0xe1, 0x81, 0xa0, 0x62, 0x30, 0xe1, 0x6a, 0x0b, 0x80, 0x12, 0x2e,
  0x89, 0x90, 0x78, 0x17, 0x01, 0x04, 0x18, 0x91, 0x74, 0x5b, 0x83, 0xc1, 0xf8, 0x30, 0x20, 0xc3, 0x85, 0x99, 0x22, 0xe8,
  0xd5, 0x07, 0x87, 0x70, 0xd0, 0x41, 0x81, 0xe2, 0x1e, 0x20, 0x07, 0x23, 0x87, 0x0b, 0x01, 0xc7, 0x0b, 0x60, 0xe3, 0x85,
  0xc2, 0xc6, 0x24, 0x0e, 0x93, 0xc8, 0x81, 0x02, 0xbd, 0x21, 0x01, 0x50, 0xa8, 0x1a, 0x09, 0x03, 0xa5, 0xbc, 0x2e, 0x91,
  0x28, 0xdd, 0x22, 0x03, 0x74, 0x22, 0x1f, 0xa0, 0x70, 0x50, 0x6e, 0x90, 0xf9, 0xba, 0x0f, 0x4f, 0xd0, 0x40, 0x28, 0x37,
  0x48, 0x78, 0xdd, 0x06, 0xc7, 0xe8, 0x24, 0x14, 0x1b, 0xa0, 0xc8, 0xdd, 0x05, 0xa7, 0xe8, 0x28, 0x14, 0x1b, 0xa0, 0xa4,
  0xdd, 0x04, 0x87, 0xe8, 0x2c, 0x14, 0x01, 0xd0, 0x76, 0x2c, 0x46, 0xe8, 0x30, 0x3f, 0x41, 0x80, 0xa0, 0x0e, 0x84, 0x03,
  0xf4, 0x16, 0x8a, 0x05, 0xb3, 0x48, 0x20, 0x1a, 0x40, 0xe0, 0x01, 0x70, 0x41, 0xba, 0x12, 0x0f, 0xb0, 0x50, 0x06, 0x47,
  0xe8, 0x4c, 0x38, 0x54, 0x6e, 0x04, 0x6c, 0x0f, 0xd0, 0xa2, 0x28, 0x16, 0x00, 0x64, 0x06, 0xe0, 0x38, 0x90, 0x2e, 0x28,
  0x1b, 0xa4, 0x90, 0x6e, 0x84, 0xc3, 0x85, 0x40, 0x66, 0x7e, 0x92, 0x69, 0xc2, 0xa3, 0x66, 0x6c, 0x0f, 0xd2, 0x52, 0x14,
  0x0b, 0x00, 0x32, 0x03, 0x78, 0x1c, 0x72, 0x17, 0x1e, 0x8d, 0xd2, 0x5e, 0x37, 0x42, 0xe9, 0xc2, 0xa0, 0x33, 0x3f, 0x49,
  0x8c, 0xe1, 0x51, 0xb3, 0x36, 0x07, 0xe9, 0x34, 0x0a, 0x05, 0x80, 0x19, 0x01, 0xbc, 0x0e, 0x47, 0x05, 0xc9, 0x21, 0xba,
  0x4e, 0x86, 0xe8, 0x6e, 0x38, 0x54, 0x06, 0x67, 0xe9, 0x3c, 0x9c, 0x2a, 0x36, 0x66, 0xc0, 0xfd, 0x27, 0xe1, 0x40, 0xb0,
  0x03, 0x20, 0x37, 0x8f, 0xd2, 0x88, 0x04, 0x03, 0x94, 0xa0, 0x72, 0xa3, 0xa6, 0x88, 0x2e, 0x94, 0x60, 0xdd, 0x28, 0x73,
  0x74, 0x55, 0x9f, 0xa2, 0x40, 0x50, 0x6e, 0x94, 0x31, 0xba, 0x29, 0x0f, 0xd1, 0x28, 0x28, 0x37, 0x4a, 0x14, 0xdd, 0x13,
  0xa7, 0xe8, 0x98, 0x14, 0x1b, 0xa2, 0x64, 0xdd, 0x12, 0x87, 0xe8, 0x9c, 0x14, 0x01, 0xd2, 0x8e, 0x16, 0x23, 0x74, 0x50,
  0x1f, 0xa2, 0x80, 0x50, 0x07, 0x4a, 0x4c, 0xfd, 0x13, 0xa2, 0x81, 0x6c, 0xd2, 0x08, 0x06, 0x90, 0x38, 0x00, 0x5c, 0x10,
  0x6e, 0x94, 0xd9, 0xf6, 0x0a, 0x00, 0xc8, 0xfd, 0x29, 0xf3, 0x85, 0x46, 0xe0, 0x46, 0xc0, 0xfd, 0x2a, 0x41, 0x40, 0xb0,
  0x03, 0x20, 0x37, 0x01, 0xc4, 0x81, 0x71, 0x40, 0xdd, 0x2b, 0x03, 0x74, 0x5e, 0x1c, 0x2a, 0x03, 0x33, 0xf4, 0xad, 0x4e,
  0x15, 0x1b, 0x33, 0x60, 0x7e, 0x95, 0xd0, 0xa0, 0x58, 0x01, 0x90, 0x1b, 0xc0, 0xe3, 0x90, 0xb8, 0xf4, 0x6e, 0x96, 0x31,
  0xba, 0x33, 0x4e, 0x15, 0x01, 0x99, 0xfa, 0x59, 0x67, 0x0a, 0x8d, 0x99, 0xb0, 0x3f, 0x4b, 0x40, 0x50, 0x2c, 0x00, 0xc8,
  0x0d, 0xe3, 0xf4, 0xb6, 0x81, 0x00, 0xe4, 0x80, 0x1c, 0x93, 0x18, 0x70, 0xb9, 0xbe, 0x03, 0xa4, 0x49, 0xd0, 0xa0, 0x07,
  0x42, 0x68, 0x39, 0xc0, 0xe9, 0xcf, 0x0b, 0xa5, 0xc8, 0x37, 0x4b, 0x7c, 0xdd, 0x20, 0x33, 0xf4, 0x91, 0xc5, 0x06, 0xe9,
  0x6f, 0x1b, 0xa3, 0xf0, 0xfd, 0x24, 0xb1, 0x41, 0xba, 0x5b, 0xa6, 0xe8, 0xf5, 0x3f, 0x49, 0x3c, 0x50, 0x6e, 0x8f, 0x13,
  0x74, 0x76, 0x1f, 0xa4, 0xa6, 0x28, 0x37, 0x47, 0x41, 0xba, 0x38, 0xcf, 0xd2, 0x57, 0x14, 0x1b, 0xa3, 0x80, 0xdd, 0x1b,
  0x67, 0xe9, 0x2d, 0x8a, 0x00, 0xe8, 0xf1, 0x16, 0x21, 0x74, 0x61, 0x74, 0x62, 0x01, 0xd1, 0xe8, 0x27, 0x46, 0x28, 0xb4,
  0xe4, 0x08, 0x06, 0x40, 0x6d, 0x0b, 0x80, 0x85, 0xd1, 0x75, 0xd1, 0x78, 0x06, 0x02, 0x74, 0x5e, 0x9b, 0xa3, 0x34, 0xdd,
  0x18, 0xe7, 0xe9, 0x00, 0x0a, 0x05, 0x80, 0x19, 0x01, 0xa8, 0x0e, 0x1a, 0x17, 0x10, 0x85, 0xd1, 0x6d, 0xd1, 0x70, 0x06,
  0x02, 0x74, 0x5c, 0x9b, 0xa3, 0xe0, 0xdd, 0x18, 0x67, 0xe9, 0x0c, 0x8a, 0x05, 0x80, 0x19, 0x01, 0xa8, 0x0e, 0x2d, 0x0b,
  0x8c, 0x42, 0xe8, 0xb2, 0xe8, 0xb4, 0x03, 0x01, 0x3a, 0x2d, 0x4d, 0xd2, 0x10, 0x37, 0x45, 0xf9, 0xfa, 0x62, 0xa2, 0x81,
  0x60, 0x06, 0x40, 0x6a, 0x03, 0x8f, 0x42, 0xe4, 0x08, 0x5d, 0x15, 0xdd, 0x16, 0x00, 0x60, 0x27, 0x45, 0x89, 0xba, 0x45,
  0x26, 0xe8, 0xbb, 0x3f, 0x4c, 0x98, 0x50, 0x2c, 0x00, 0xc8, 0x0d, 0x40, 0x72, 0x34, 0x2e, 0x48, 0x85, 0xd1, 0x55, 0xd1,
  0x58, 0x06, 0x02, 0x74, 0x56, 0x9b, 0xa4, 0x84, 0x6e, 0x8b, 0x73, 0xf4, 0xcd, 0xc5, 0x02, 0xc0, 0x0c, 0x80, 0xd4, 0x03,
  0xa2, 0xb0, 0x1c, 0x9e, 0x01, 0xcd, 0xc8, 0x39, 0x44, 0x07, 0x29, 0x42, 0xe8, 0x5b, 0x1f, 0xa2, 0x3c, 0xc3, 0x74, 0x48,
  0x98, 0x61, 0xba, 0x5a, 0x87, 0x18, 0x61, 0xfa, 0x69, 0xe7, 0x18, 0x61, 0xfa, 0x6a, 0x82, 0x81, 0x66, 0x16, 0xc0, 0xb8,
  0x00, 0xdd, 0x14, 0x29, 0x20, 0xb0, 0x50, 0x2b, 0x45, 0x02, 0xc3, 0x11, 0x50, 0xa8, 0x57, 0x11, 0x61, 0x80, 0xa0, 0x58,
  0x05, 0xaf, 0x58, 0x81, 0x68, 0x0b, 0x56, 0xd1, 0x34, 0x0a, 0x85, 0x99, 0x02, 0x84, 0x90, 0x58, 0x28, 0x14, 0x82, 0x81,
  0x63, 0x88, 0x98, 0x0a, 0x85, 0x71, 0x13, 0x11, 0x50, 0xb4, 0xe4, 0x20, 0x5b, 0x36, 0x89, 0xb0, 0x4d, 0x22, 0xc0, 0x2c,
  0xc6, 0xe9, 0xbf, 0x1b, 0xa5, 0x4a, 0x61, 0xc7, 0x0b, 0x11, 0x3a, 0x19, 0x84, 0xe9, 0xc5, 0x01, 0xd2, 0x0a, 0x03, 0xa4,
  0x10, 0x0c, 0x46, 0xe9, 0x40, 0x18, 0x2e, 0x9c, 0x58, 0x1d, 0x03, 0x7d, 0x02, 0x60, 0x81, 0x74, 0xa6, 0x3a, 0x71, 0xc6,
  0xe9, 0xc2, 0x9f, 0xa7, 0x14, 0x28, 0x37, 0x4e, 0x20, 0xfd, 0x38, 0x81, 0x40, 0x1d, 0x39, 0x03, 0xf4, 0xa8, 0x85, 0x06,
  0xe9, 0xc6, 0x9b, 0xa5, 0x4a, 0x7e, 0x9c, 0x80, 0xa0, 0x0e, 0x9c, 0xb8, 0xb1, 0x0b, 0x56, 0x80, 0x40, 0x34, 0x81, 0xc0,
  0x07, 0xe9, 0x5c, 0x8a, 0x0d, 0xd3, 0x9f, 0x30, 0xdb, 0x0f, 0xd3, 0xa2, 0x14, 0x01, 0xa4, 0x58, 0x8d, 0xd3, 0xa6, 0x3e,
  0x81, 0x41, 0xf8, 0x20, 0xa0, 0x19, 0x01, 0xb8, 0x6e, 0x9d, 0x90, 0x20, 0x1c, 0x4c, 0x07, 0x14, 0x0d, 0xd2, 0xa1, 0x30,
  0xc1, 0x74, 0xee, 0x40, 0xe6, 0x2f, 0xa4, 0x76, 0x08, 0x37, 0x4b, 0x00, 0x5d, 0x3b, 0xd0, 0x39, 0xfb, 0xe7, 0xcc, 0x10,
  0x2e, 0x96, 0xbf, 0x4f, 0x00, 0xdd, 0x3b, 0xc3, 0xf4, 0xef, 0x05, 0x00, 0x74, 0xf1, 0x0f, 0xd2, 0xdc, 0x14, 0x1b, 0xa7,
  0x82, 0x6e, 0x96, 0xf9, 0xfa, 0x78, 0x82, 0x80, 0x3a, 0x79, 0x62, 0xc4, 0x2d, 0x5a, 0x01, 0x00, 0xd2, 0x37, 0x4f, 0x40,
  0x10, 0x0e, 0x04, 0x07, 0x04, 0x03, 0x84, 0x8f, 0xd2, 0xb9, 0x38, 0xe1, 0x3a, 0x7b, 0x07, 0xe9, 0xe9, 0x8b, 0xa5, 0xce,
  0x3f, 0x4f, 0x40, 0x5d, 0x2d, 0xc1, 0xfa, 0x5c, 0x42, 0xe9, 0x68, 0x8f, 0xd2, 0xd7, 0x17, 0x4b, 0x1c, 0x2e, 0x79, 0xfa,
  0x55, 0x40, 0xe7, 0xa4, 0x0e, 0x79, 0xc0, 0xc0, 0x7e, 0x96, 0xb8, 0xa0, 0xdd, 0x2e, 0x03, 0x0d, 0xcf, 0x99, 0xfa, 0x5c,
  0x62, 0x80, 0x34, 0x8b, 0x11, 0xba, 0x5c, 0xe7, 0xd0, 0x28, 0x3f, 0x3f, 0x62, 0x80, 0x64, 0x06, 0xe0, 0x38, 0x38, 0xfd,
  0x2f, 0x51, 0x41, 0xba, 0x5f, 0xc6, 0x1b, 0xa0, 0x20, 0xfd, 0x30, 0x11, 0x40, 0x1a, 0x45, 0x88, 0xdd, 0x30, 0x53, 0xe8,
  0x14, 0x1f, 0xa0, 0x40, 0x50, 0x0c, 0x80, 0xdc, 0x07, 0x15, 0x0f, 0xd3, 0x13, 0x14, 0x1b, 0xa7, 0xfe, 0x61, 0xba, 0x07,
  0x4f, 0xd4, 0x01, 0x0a, 0x00, 0xd2, 0x2c, 0x46, 0xea, 0x01, 0x8f, 0xa0, 0x50, 0x7e, 0x82, 0x51, 0x40, 0x32, 0x03, 0x70,
  0x1c, 0x7a, 0x3f, 0x4c, 0xbc, 0x50, 0x6e, 0xa0, 0x54, 0xc3, 0x74, 0x19, 0x1f, 0xa8, 0x18, 0x14, 0x01, 0xa4, 0x58, 0x8d,
  0xd4, 0x0e, 0x1f, 0x40, 0xa0, 0xfd, 0x07, 0x42, 0x80, 0x64, 0x06, 0xe1, 0xba, 0x82, 0x80, 0x40, 0x39, 0x24, 0x17, 0x50,
  0x57, 0xd3, 0x3c, 0x37, 0x50, 0x4c, 0x6e, 0x9a, 0x21, 0xfa, 0x82, 0x41, 0x40, 0xb9, 0x98, 0xe6, 0x54, 0x1c, 0xcd, 0x01,
  0xcc, 0xa8, 0x18, 0x05, 0xa0, 0x6e, 0xa0, 0xc0, 0xfc, 0xd2, 0x0a, 0x00, 0xc8, 0xfd, 0x41, 0xa1, 0xc2, 0xa3, 0x73, 0x54,
  0x6c, 0x0f, 0xd4, 0x1c, 0x8a, 0x05, 0x80, 0x19, 0x01, 0xb8, 0x7e, 0xa1, 0x0c, 0x10, 0x0e, 0x14, 0x07, 0x0c, 0x0b, 0x96,
  0x61, 0x73, 0x26, 0x37, 0x50, 0x86, 0x7e, 0x9b, 0x31, 0xfa, 0x6c, 0xc2, 0x81, 0x60, 0x37, 0x50, 0x86, 0x7e, 0x9b, 0x01,
  0xfa, 0x6c, 0x02, 0x81, 0x60, 0x37, 0x4d, 0x60, 0xfd, 0x35, 0x83, 0xf4, 0xd6, 0x05, 0x02, 0xc0, 0x6e, 0x9a, 0x81, 0xfa,
  0x6a, 0x07, 0xe9, 0xa8, 0x0a, 0x05, 0x80, 0xdd, 0x34, 0x93, 0xf4, 0xd2, 0x4f, 0xd3, 0x49, 0x14, 0x0b, 0x00, 0x1d, 0x33,
  0x33, 0x74, 0xd2, 0x4f, 0xd3, 0x49, 0x3f, 0x4d, 0x24, 0x50, 0x2c, 0x00, 0x74, 0xce, 0x45, 0x98, 0x1b, 0x86, 0xe9, 0xae,
  0x9f, 0xa6, 0xba, 0x7e, 0x9a, 0xe8, 0xa0, 0x58, 0x00, 0xcc, 0x59, 0x81, 0xc2, 0xc6, 0xe9, 0xb9, 0x1f, 0xa6, 0xe4, 0x7e,
  0x9b, 0x90, 0xa0, 0x58, 0x00, 0xcc, 0x59, 0x81, 0xc5, 0x03, 0x74, 0xe1, 0xcf, 0xd3, 0x87, 0x3f, 0x4e, 0x1c, 0x50, 0x2c,
  0x00, 0x66, 0x2c, 0xc0, 0xe3, 0x51, 0xba, 0x73, 0x47, 0xe9, 0xcd, 0x1f, 0xa7, 0x34, 0x28, 0x16, 0x00, 0x33, 0x16, 0x60,
  0x72, 0x08, 0x0e, 0x9d, 0x88, 0x5d, 0x3a, 0xde, 0x9d, 0x88, 0xba, 0x76, 0x63, 0xf4, 0xdd, 0x0f, 0xd3, 0x7b, 0x0c, 0x03,
  0x8c, 0x00, 0xe2, 0xb8, 0x28, 0x07, 0x1c, 0x01, 0xc4, 0xd0, 0x50, 0x0e, 0x40, 0x01, 0xc4, 0x30, 0x50, 0x0e, 0x44, 0x01,
  0xc3, 0x20, 0xa0, 0x1c, 0x90, 0x03, 0x83, 0xc1, 0x40, 0x38, 0x18, 0x5c, 0x18, 0x07, 0x40, 0xd8, 0xba, 0x78, 0x63, 0x80,
  0xe8, 0x1e, 0x30, 0xe1, 0x74, 0x10, 0x00, 0xe8, 0x22, 0x37, 0x41, 0x59, 0xc2, 0xa3, 0x71, 0x09, 0x87, 0x0b, 0x01, 0xba,
  0x7a, 0x27, 0xe9, 0xec, 0x0a, 0x0f, 0xc5, 0x02, 0x83, 0x0e, 0x16, 0x80, 0xba, 0x7b, 0x5d, 0x3f, 0x90, 0x72, 0x67, 0xa7,
  0x22, 0x0e, 0x4a, 0x74, 0xe4, 0x85, 0x00, 0xe5, 0x08, 0x1c, 0x8f, 0x82, 0x80, 0x72, 0xa4, 0x0e, 0x45, 0x41, 0x40, 0x39,
  0x62, 0x07, 0x21, 0x60, 0xa0, 0x1c, 0xb9, 0x03, 0x90, 0x10, 0x50, 0x0e, 0x00, 0x3f, 0x4e, 0xe8, 0xe1, 0x3a, 0x8c, 0xc3,
  0xf5, 0x18, 0xe2, 0xe9, 0x2c, 0x8f, 0xd4, 0x62, 0x0b, 0xa4, 0xd8, 0x3f, 0x4f, 0x58, 0x5d, 0x27, 0xf0, 0xba, 0x53, 0x5d,
  0x29, 0x80, 0x74, 0xa7, 0x80, 0xe9, 0x4c, 0x81, 0x80, 0xfd, 0x3d, 0x61, 0x41, 0xba, 0x7b, 0xe6, 0x1b, 0xa5, 0x50, 0x7e,
  0x9f, 0x10, 0xa0, 0x0d, 0x22, 0xc4, 0x6e, 0x9f, 0x31, 0xf4, 0x0a, 0x0f, 0xd2, 0xb0, 0x14, 0x03, 0x20, 0x37, 0x01, 0xc1,
  0xc7, 0xe9, 0xfa, 0x0a, 0x0d, 0xd4, 0x70, 0x18, 0x6e, 0x95, 0xe9, 0xfa, 0x8e, 0x31, 0x40, 0x1a, 0x45, 0x88, 0xdd, 0x47,
  0x39, 0xf4, 0x0a, 0x0f, 0xd2, 0xc5, 0x14, 0x03, 0x20, 0x37, 0x01, 0xc5, 0x43, 0xf5, 0x02, 0x02, 0x83, 0x75, 0x1e, 0xc6,
  0x1b, 0xa5, 0xa4, 0x7e, 0xa3, 0xe4, 0x50, 0x06, 0x91, 0x62, 0x37, 0x51, 0xfa, 0x7d, 0x02, 0x83, 0xf4, 0xb6, 0x85, 0x00,
  0xc8, 0x0d, 0xc3, 0x75, 0x21, 0x20, 0x80, 0x71, 0xf8, 0x1c, 0xf1, 0x74, 0x1c, 0x83, 0xa2, 0x03, 0x9c, 0x81, 0x40, 0xb0,
  0x01, 0xcc, 0x38, 0x3a, 0x83, 0x30, 0xba, 0x91, 0x11, 0x80, 0x74, 0x46, 0x8b, 0x91, 0x83, 0x00, 0xe8, 0x90, 0x37, 0x50,
  0x72, 0x28, 0x37, 0x50, 0xb4, 0x28, 0x17, 0x44, 0xef, 0x2a, 0x80, 0xe8, 0x96, 0x3f, 0x50, 0x7e, 0x28, 0x3f, 0x50, 0xc0,
  0x28, 0x16, 0x60, 0x72, 0xac, 0x2e, 0x5b, 0xf2, 0xc4, 0xc3, 0x72, 0xc8, 0xfd, 0x42, 0x39, 0x87, 0xe8, 0xaa, 0x14, 0x0b,
  0x10, 0xb3, 0x1f, 0x49, 0xf9, 0x74, 0x7d, 0x00, 0xe8, 0x75, 0xe8, 0x7c, 0x07, 0x13, 0x74, 0x2f, 0xa4, 0x0e, 0xa7, 0xcc,
  0x4e, 0xa4, 0xd0, 0x0e, 0x80, 0xc0, 0x61, 0xd4, 0xfa, 0x89, 0xd4, 0x9b, 0x81, 0xc5, 0xc0, 0xc0, 0x2d, 0x21, 0x6b, 0x01,
  0xcd, 0x98, 0x3a, 0x85, 0xf0, 0xba, 0x93, 0xd1, 0x86, 0x18, 0x07, 0x45, 0xd9, 0xfa, 0x86, 0x80, 0x74, 0x0d, 0x74, 0x39,
  0x1f, 0xa8, 0x42, 0x13, 0xa9, 0x46, 0x3f, 0x52, 0x82, 0x2e, 0x94, 0x08, 0xfd, 0x49, 0xf0, 0xba, 0x52, 0x81, 0x74, 0xab,
  0xfa, 0x55, 0xa0, 0xe9, 0x59, 0x81, 0xd2, 0xae, 0x03, 0x01, 0xfa, 0x85, 0xb1, 0x41, 0xba, 0x94, 0x73, 0x0d, 0xd2, 0xbd,
  0x3f, 0x52, 0x94, 0x28, 0x03, 0x48, 0xb1, 0x1b, 0xa9, 0x4e, 0x3e, 0x81, 0x41, 0xfa, 0x58, 0xa2, 0x80, 0x64, 0x06, 0xe0,
  0x38, 0x38, 0xfd, 0x43, 0xb8, 0xa0, 0xdd, 0x4a, 0xe9, 0x86, 0xe9, 0x69, 0x1f, 0xa9, 0x60, 0x14, 0x01, 0xa4, 0x58, 0x8d,
  0xd4, 0xb2, 0x1f, 0x40, 0xa0, 0xfd, 0x2d, 0xa1, 0x40, 0x32, 0x03, 0x70, 0xdd, 0x4b, 0x80, 0x20, 0x1c, 0x58, 0x03, 0xa2,
  0x84, 0x1d, 0x17, 0x20, 0x72, 0x0f, 0xa9, 0xd7, 0x13, 0xa9, 0x76, 0x03, 0xa3, 0x10, 0x1c, 0x80, 0x0b, 0x10, 0xb8, 0xd8,
  0x07, 0x3e, 0x40, 0xe3, 0x90, 0xb9, 0x4a, 0x38, 0x0e, 0x8f, 0x81, 0x71, 0xf0, 0x0e, 0x8f, 0xa1, 0x72, 0x4c, 0x2e, 0x4a,
  0x85, 0xc9, 0x70, 0xb9, 0x32, 0x38, 0xe1, 0x72, 0x94, 0x2e, 0x90, 0x60, 0x5d, 0x21, 0x1e, 0x90, 0xd8, 0xba, 0x43, 0xbd,
  0x21, 0xd1, 0x40, 0xba, 0x43, 0xdd, 0x21, 0xc1, 0x74, 0x87, 0x7a, 0x43, 0xa2, 0x81, 0x60, 0x17, 0x48, 0x8b, 0xa4, 0x44,
  0x26, 0x81, 0x65, 0x05, 0x02, 0xc4, 0x26, 0xe1, 0x74, 0x8a, 0x3a, 0x43, 0xc2, 0x74, 0x87, 0x84, 0xda, 0x2e, 0x91, 0x5f,
  0x48, 0xb0, 0x4e, 0x02, 0x2e, 0x91, 0x1f, 0x48, 0x8c, 0x4e, 0x04, 0x2a, 0x16, 0x41, 0x38, 0x40, 0xba, 0x45, 0xbd, 0x22,
  0x71, 0x74, 0x8d, 0x3a, 0x45, 0x22, 0xe1, 0x01, 0x50, 0xba, 0x46, 0x9d, 0x22, 0xc1, 0x70, 0x90, 0xb8, 0x67, 0x0d, 0x14,
  0x0b, 0x10, 0x9c, 0x44, 0x2e, 0x20, 0xe9, 0x18, 0x8b, 0x85, 0xf4, 0x8e, 0x85, 0x02, 0xe9, 0x1e, 0x74, 0x8f, 0x04, 0xa2,
  0xa1, 0x38, 0xa4, 0x5d, 0x23, 0x8d, 0xa2, 0xe9, 0x1f, 0xf1, 0x10, 0xa0, 0x5d, 0x23, 0xce, 0x92, 0x20, 0x9c, 0x04, 0x5c,
  0x2f, 0xa4, 0x80, 0x28, 0x16, 0x21, 0x38, 0xc8, 0x5c, 0x3f, 0x8c, 0x45, 0xd2, 0x4a, 0xe2, 0xf1, 0x40, 0xb8, 0xcf, 0x89,
  0xc5, 0xc4, 0xbc, 0x68, 0x28, 0x16, 0x01, 0x38, 0xe8, 0x5c, 0x53, 0xb8, 0x5c, 0x6d, 0xd2, 0x54, 0x14, 0x0b, 0x8a, 0xb8,
  0xa8, 0x5d, 0x24, 0xde, 0x04, 0x28, 0x16, 0x01, 0x39, 0x04, 0x2e, 0x92, 0xcf, 0x13, 0x0b, 0x83, 0xf4, 0x96, 0x05, 0x02,
  0xe4, 0x07, 0x49, 0x70, 0x5c, 0x50, 0x15, 0x09, 0xc8, 0x91, 0x71, 0x6f, 0x49, 0x6c, 0x5d, 0x25, 0xfe, 0x93, 0x08, 0xa0,
  0x5c, 0x41, 0xc8, 0xa1, 0x72, 0x33, 0x8f, 0xc5, 0x02, 0xc0, 0x27, 0x24, 0x45, 0xc8, 0xfe, 0x47, 0x8b, 0x91, 0xbc, 0x8e,
  0x14, 0x0b, 0xa4, 0xdb, 0xc8, 0x31, 0x72, 0x47, 0xa4, 0xd4, 0x28, 0x16, 0x01, 0x39, 0x32, 0x2e, 0x93, 0x97, 0x1e, 0x89,
  0xb4, 0x5c, 0x99, 0xe4, 0x50, 0xba, 0x4e, 0xbd, 0x26, 0xe1, 0x40, 0xb0, 0x09, 0xca, 0x01, 0x71, 0xa7, 0x26, 0xc5, 0xc9,
  0x0e, 0x49, 0x8a, 0x05, 0xca, 0x2e, 0x93, 0xd0, 0xb9, 0x39, 0xc9, 0x61, 0x40, 0xb0, 0x09, 0xca, 0x81, 0x74, 0x9d, 0xf9,
  0x4e, 0x2e, 0x4c, 0x72, 0x94, 0x50, 0x2e, 0x53, 0x72, 0x48, 0x5c, 0x99, 0xe9, 0x42, 0x8a, 0x05, 0x80, 0x4e, 0x58, 0x0b,
  0x95, 0x9d, 0x28, 0x71, 0x34, 0x8b, 0x91, 0xfc, 0x18, 0x50, 0x27, 0x2d, 0x45, 0xca, 0x7e, 0x94, 0x38, 0x9b, 0x85, 0xc9,
  0xee, 0x94, 0x30, 0x9a, 0x05, 0x42, 0x72, 0xec, 0x5c, 0xad, 0xe5, 0x98, 0x9c, 0x5e, 0x2e, 0x94, 0x7f, 0x4a, 0x58, 0x5c,
  0x92, 0xe5, 0x28, 0xa0, 0x58, 0x04, 0xe6, 0x08, 0x5c, 0xbd, 0xe5, 0xd0, 0x9c, 0x0c, 0x5d, 0x29, 0x3e, 0x59, 0x8b, 0x98,
  0x1e, 0x56, 0x0a, 0x05, 0x80, 0x4e, 0x62, 0x45, 0xc8, 0x0e, 0x37, 0x17, 0x2d, 0xfa, 0x54, 0x22, 0xe6, 0x1f, 0x98, 0x71,
  0x40, 0xb0, 0x09, 0xcc, 0x78, 0xb9, 0x67, 0xcb, 0xe1, 0x39, 0x81, 0x17, 0x2d, 0x79, 0x8d, 0x17, 0x2e, 0x79, 0x8a, 0x14,
  0x0b, 0x00, 0x9c, 0xcb, 0x0b, 0xa5, 0x51, 0xcc, 0x18, 0x9c, 0x76, 0x2e, 0x56, 0x74, 0xaa, 0x84, 0xe4, 0xe0, 0xa8, 0x4e,
  0x67, 0x05, 0xcc, 0xd7, 0x33, 0x02, 0xe6, 0x73, 0x99, 0x81, 0x40, 0xb9, 0x8c, 0xe9, 0x57, 0x09, 0xc6, 0xe2, 0xa1, 0x39,
  0xa3, 0x17, 0x4a, 0xf3, 0x98, 0xa1, 0x73, 0x39, 0xd2, 0xb3, 0x14, 0x0b, 0x97, 0x5c, 0xba, 0x17, 0x32, 0xdc, 0xca, 0x0a,
  0x05, 0x80, 0x4e, 0x6a, 0xc5, 0xd2, 0xc0, 0xe6, 0x74, 0x5c, 0xae, 0x0b, 0x9a, 0xbe, 0x96, 0x20, 0xb9, 0xac, 0xe6, 0x48,
  0x50, 0x2c, 0x02, 0x73, 0x64, 0x2e, 0x67, 0xf9, 0x86, 0x13, 0x95, 0x22, 0xe6, 0x6f, 0x9a, 0x31, 0x71, 0x80, 0x54, 0x27,
  0x37, 0x02, 0xe6, 0xcf, 0xa5, 0x9a, 0x2e, 0x18, 0x17, 0x33, 0xdd, 0x2d, 0x31, 0x73, 0x6f, 0xcc, 0x78, 0xa0, 0x58, 0x04,
  0xe6, 0xfc, 0x5c, 0xdf, 0x73, 0x6e, 0x27, 0x33, 0xc2, 0xe9, 0x6d, 0x73, 0x72, 0x2e, 0x6f, 0xba, 0x5b, 0x62, 0x81, 0x60,
  0x13, 0x9c, 0x61, 0x73, 0x71, 0xce, 0x08, 0xb9, 0x04, 0x17, 0x38, 0x7c, 0xe3, 0x8b, 0x9c, 0x1e, 0x96, 0xf0, 0xa0, 0x58,
  0x04, 0xe7, 0x34, 0x5c, 0xcb, 0xf2, 0x84, 0x5d, 0x2d, 0xce, 0x48, 0x8a, 0x04, 0xe7, 0x44, 0x5c, 0xe6, 0xf3, 0x7c, 0x2e,
  0x53, 0x85, 0xcd, 0xd7, 0x4b, 0xa0, 0x4e, 0x27, 0x15, 0x09, 0xce, 0xb8, 0xba, 0x5d, 0xdd, 0x2e, 0x91, 0x73, 0x79, 0xd2,
  0xe7, 0x14, 0x0b, 0x9c, 0x1e, 0x97, 0x98, 0xa8, 0x54, 0x27, 0x3b, 0xc2, 0xe7, 0x77, 0xa5, 0xee, 0x2e, 0x25, 0x0b, 0x9d,
  0xbe, 0x73, 0x44, 0xe6, 0x54, 0x54, 0x27, 0x3c, 0x82, 0xe7, 0x23, 0x9d, 0x61, 0x74, 0xbf, 0x39, 0xe4, 0x14, 0x0b, 0x9c,
  0xbe, 0x97, 0xf0, 0xba, 0x5f, 0xbc, 0xde, 0x0a, 0x05, 0x80, 0x4e, 0x7b, 0x05, 0xd2, 0xfe, 0xe7, 0x6c, 0x4e, 0x4e, 0x0b,
  0x9e, 0x6e, 0x7a, 0x85, 0xc7, 0x61, 0x50, 0x9c, 0xf9, 0x0b, 0x9f, 0x0e, 0x98, 0x38, 0x9a, 0xc5, 0xcf, 0x7f, 0x3c, 0x62,
  0xe9, 0x86, 0x74, 0xc2, 0x85, 0x02, 0xc0, 0x27, 0x3f, 0x22, 0xe7, 0x83, 0x9f, 0x71, 0x38, 0x50, 0xba, 0x62, 0x9d, 0x31,
  0x01, 0x73, 0xf5, 0xd3, 0x0e, 0x14, 0x0b, 0x00, 0x9d, 0x00, 0x02, 0xe7, 0x9f, 0x9e, 0xd1, 0x72, 0x78, 0x2e, 0x80, 0x1e,
  0x80, 0x11, 0x71, 0x18, 0x54, 0x27, 0x40, 0x30, 0xb9, 0xda, 0xe9, 0x8e, 0x89, 0xcf, 0x50, 0xba, 0x01, 0x3a, 0x62, 0xe2,
  0x71, 0x28, 0xa8, 0x4e, 0x80, 0xc1, 0x73, 0xc7, 0xcd, 0x98, 0xb9, 0x79, 0xce, 0x08, 0xa0, 0x4e, 0x81, 0x01, 0x73, 0xfb,
  0xcf, 0xa0, 0x9c, 0x92, 0x17, 0x40, 0x27, 0x3c, 0xc2, 0x73, 0x12, 0x2a, 0x13, 0xa0, 0x58, 0x5d, 0x32, 0xde, 0x80, 0x31,
  0x72, 0x94, 0x2e, 0x7f, 0xf9, 0xff, 0x17, 0x4c, 0xaf, 0xa0, 0x60, 0x50, 0x2c, 0x02, 0x74, 0x0e, 0x8b, 0xa0, 0x03, 0x01,
  0x73, 0xe5, 0xd0, 0x3a, 0x2e, 0x99, 0xc7, 0x40, 0xd0, 0xa0, 0x58, 0x04, 0xe8, 0x23, 0x17, 0x40, 0x57, 0x40, 0xf8, 0xb9,
  0x44, 0x17, 0x40, 0x97, 0x4c, 0xe8, 0x5c, 0xb9, 0x0a, 0x84, 0xe8, 0x29, 0x17, 0x40, 0xc7, 0x4d, 0x00, 0x4e, 0x80, 0x11,
  0x74, 0xd0, 0xba, 0x67, 0x42, 0xe1, 0x41, 0x50, 0x9d, 0x05, 0xe2, 0xe8, 0x1e, 0xe8, 0x16, 0x17, 0x4c, 0xff, 0xa6, 0x7e,
  0x28, 0x17, 0x38, 0xfc, 0xf4, 0x8a, 0x04, 0xe8, 0x35, 0x17, 0x41, 0x6f, 0x4d, 0x1c, 0x5d, 0x06, 0x3d, 0x05, 0x02, 0x81,
  0x74, 0xd3, 0x7a, 0x0d, 0x84, 0xe7, 0xb4, 0x54, 0x27, 0x41, 0xe0, 0xba, 0x6a, 0x7d, 0x06, 0xe2, 0x71, 0xe8, 0xba, 0x0a,
  0xfa, 0x0e, 0x44, 0xe2, 0x01, 0x50, 0x9d, 0x08, 0x42, 0xe0, 0xfd, 0x02, 0x82, 0xe9, 0xad, 0x74, 0x15, 0x0b, 0x9d, 0x40,
  0xa8, 0x4e, 0x84, 0x71, 0x74, 0xd7, 0xba, 0x0e, 0x44, 0xe9, 0xae, 0x0b, 0xa1, 0x13, 0xa0, 0x74, 0x5c, 0x4e, 0x15, 0x09,
  0xd0, 0x9a, 0x2e, 0x9a, 0xff, 0x41, 0x08, 0xb9, 0x94, 0x0b, 0xa6, 0xd1, 0xd3, 0x68, 0x17, 0x4d, 0x8b, 0xa1, 0x30, 0x50,
  0x2c, 0x02, 0x74, 0x2a, 0x0b, 0xa6, 0xd3, 0xd3, 0x66, 0x13, 0x9b, 0x81, 0x74, 0x2a, 0xf4, 0x29, 0x09, 0xd0, 0xa8, 0x2a,
  0x13, 0xa1, 0x68, 0x5d, 0x08, 0x5d, 0x04, 0xe2, 0xe8, 0x5a, 0xe9, 0xb8, 0x0b, 0xa0, 0x28, 0x2a, 0x13, 0xa1, 0x7c, 0x5d,
  0x37, 0x1e, 0x85, 0x11, 0x3a, 0x09, 0x85, 0xd0, 0x49, 0xce, 0x58, 0xa0, 0x4e, 0x86, 0x41, 0x74, 0xdc, 0xfa, 0x18, 0x05,
  0xd0, 0x8e, 0x17, 0x4d, 0xe3, 0xa1, 0x78, 0x5c, 0xcb, 0x05, 0x42, 0x74, 0x35, 0x0b, 0xa1, 0x47, 0xa0, 0xf8, 0x4e, 0x61,
  0xc5, 0xce, 0xd7, 0x34, 0x62, 0x81, 0x3a, 0x1b, 0xc5, 0xd0, 0x87, 0xd0, 0xce, 0x2e, 0x81, 0x40, 0xba, 0x18, 0xfa, 0x18,
  0xc5, 0xd0, 0x8a, 0x15, 0x09, 0xd0, 0xea, 0x2e, 0x9c, 0x77, 0x42, 0x48, 0x9d, 0x0c, 0x42, 0xe6, 0x93, 0x9e, 0x51, 0x40,
  0x9d, 0x0f, 0x42, 0xe7, 0x8b, 0x9b, 0xf1, 0x65, 0xcd, 0x20, 0xa0, 0x4e, 0x87, 0xe1, 0x74, 0x29, 0x74, 0x3d, 0x09, 0xcd,
  0xe8, 0xba, 0x1e, 0xfa, 0x19, 0x04, 0xe3, 0x81, 0x50, 0x9d, 0x10, 0x82, 0xe9, 0xc9, 0xf4, 0x3f, 0x89, 0xd0, 0x70, 0x2e,
  0x87, 0xee, 0x87, 0xe1, 0x74, 0x3f, 0xf4, 0x3a, 0x0a, 0x05, 0x80, 0x4e, 0x88, 0xb1, 0x74, 0x44, 0xf4, 0x43, 0x0b, 0xa1,
  0x78, 0x2e, 0x87, 0xfe, 0x88, 0xc1, 0x72, 0xac, 0x2a, 0x13, 0xa2, 0x44, 0x5d, 0x08, 0x9c, 0xf6, 0x8b, 0xa2, 0x2b, 0xa7,
  0x56, 0x2e, 0x57, 0x05, 0x42, 0x74, 0x4b, 0x0b, 0xa0, 0x47, 0xa7, 0x58, 0x2e, 0x88, 0xfe, 0x87, 0xb1, 0x71, 0x18, 0x54,
  0x27, 0x44, 0xd8, 0x1d, 0x20, 0x10, 0x66, 0x06, 0xd0, 0x38, 0x20, 0x1c, 0x30, 0x0e, 0x23, 0x03, 0x8a, 0x00, 0xe2, 0xe0,
  0x38, 0xd4, 0x0e, 0x3b, 0x03, 0x90, 0x40, 0x72, 0x20, 0x0e, 0x47, 0x01, 0xc9, 0x50, 0x39, 0x3a, 0x07, 0x29, 0x00, 0xe5,
  0x50, 0x1c, 0xb1, 0x03, 0x97, 0x20, 0x73, 0x00, 0x07, 0x30, 0xe0, 0x73, 0x1c, 0x07, 0x32, 0xa0, 0x73, 0x3a, 0x07, 0x34,
  0x80, 0x73, 0x52, 0x07, 0x36, 0x00, 0x73, 0x6e, 0x07, 0x37, 0xe0, 0x73, 0x8e, 0x07, 0x39, 0xc0, 0x73, 0xae, 0x07, 0x3b,
  0xc0, 0x73, 0xcc, 0x07, 0x3d, 0xa0, 0x73, 0xe4, 0x07, 0x3f, 0x40, 0x74, 0x01, 0x01, 0xd0, 0x14, 0x07, 0x40, 0x88, 0x1d,
  0x03, 0x20, 0x74, 0x11, 0x01, 0xd0, 0x54, 0x07, 0x41, 0x88, 0x1d, 0x07, 0x20, 0x74, 0x20, 0x01, 0xd0, 0x90, 0x07, 0x42,
  0x80, 0x1d, 0x0a, 0xe0, 0x74, 0x2e, 0x81, 0xd0, 0xcc, 0x07, 0x43, 0x78, 0x1d, 0x0e, 0xe0, 0x74, 0x40, 0x01, 0xd1, 0x12,
  0x07, 0x44, 0x88, 0x1d, 0x13, 0x40, 0x74, 0x51, 0x81, 0xd1, 0x5a, 0x07, 0x45, 0xa8, 0x1d, 0x18, 0x00, 0x74, 0x65, 0x81,
  0xd1, 0xb2, 0x07, 0x4f, 0xe4, 0x2e, 0xa0, 0x40, 0x2e, 0x9f, 0x2f, 0x48, 0xf0, 0x0e, 0x9e, 0xf9, 0xba, 0x49, 0xe7, 0xe9,
  0x28, 0x0a, 0x00, 0xe9, 0xf1, 0x8b, 0x11, 0xba, 0xa9, 0x13, 0x0f, 0x05, 0x00, 0x74, 0xfa, 0x4d, 0xd2, 0xc0, 0x3f, 0x4b,
  0x04, 0x50, 0x07, 0x4f, 0xb4, 0x58, 0x85, 0xac, 0x6e, 0x96, 0x29, 0xfa, 0x58, 0xc2, 0x80, 0x3a, 0x7e, 0x66, 0xe9, 0x2e,
  0x9f, 0xa4, 0xbc, 0x28, 0x03, 0xa7, 0xee, 0x2c, 0x46, 0xe9, 0x1e, 0x9f, 0xa4, 0x7c, 0x28, 0x03, 0xa7, 0xf8, 0x2e, 0x92,
  0xe7, 0x49, 0x54, 0x0e, 0x9f, 0xf0, 0xa8, 0x5a, 0x02, 0xe0, 0x40, 0x71, 0x28, 0x1d, 0x41, 0xb8, 0x1d, 0x42, 0x50, 0x1d,
  0x4e, 0xd8, 0x1d, 0x5c, 0xa8, 0x5d, 0x5f, 0xd8, 0xdd, 0x42, 0x40, 0x9d, 0x42, 0x41, 0xba, 0xb9, 0x51, 0x3a, 0x84, 0x73,
  0x75, 0x3f, 0x42, 0xea, 0x9c, 0x89, 0x29, 0xaf, 0x43, 0x33, 0xa4, 0xf9, 0xc4, 0xe8, 0xab, 0xa5, 0x86, 0xfe, 0x47, 0x1f,
  0x44, 0x4f, 0xb6, 0xc1, 0x9c, 0x71, 0xe1, 0xa7, 0x1c, 0x89, 0x44, 0xd9, 0x1a, 0x0a, 0xb2, 0x25, 0xdf, 0xab, 0x79, 0xc3,
  0x00, 0xc4, 0x1b, 0x80, 0x33, 0x06, 0x81, 0xd5, 0x43, 0x04, 0xea, 0xa0, 0x5b, 0x43, 0xae, 0xfc, 0x5f, 0xe5, 0x58, 0x73,
  0x06, 0xc0, 0x45, 0x80, 0xd8, 0x6a, 0x63, 0x73, 0x69, 0xae, 0xa4, 0x4a, 0x63, 0x49, 0xef, 0xf8, 0x16, 0xa9, 0x4e, 0xd2,
  0xa1, 0xe1, 0x9e, 0x9b, 0x74, 0xf8, 0x06, 0x01, 0x80, 0x1d, 0x54, 0xc0, 0x4e, 0xaa, 0x4c, 0xf4, 0x39, 0x81, 0x40, 0xea,
  0xaa, 0x82, 0x75, 0x54, 0xa7, 0xa1, 0xd8, 0x05, 0x03, 0xaa, 0xbc, 0x09, 0xd5, 0x5b, 0x9e, 0x87, 0x80, 0x81, 0x40, 0xea,
  0xb3, 0x02, 0x75, 0x58, 0xe7, 0xa1, 0xe0, 0xc0, 0x50, 0x3a, 0xad, 0xb0, 0x9d, 0x56, 0xb9, 0xe8, 0x78, 0x58, 0x14, 0x0e,
  0x2a, 0x0b, 0xa5, 0x47, 0xd2, 0x9d, 0x14, 0x1f, 0x00, 0xf1, 0x08, 0x14, 0x0e, 0x32, 0x1f, 0xab, 0x50, 0x30, 0xf0, 0x50,
  0x2c, 0x47, 0xcc, 0x3c, 0x54, 0x05, 0x03, 0xab, 0x09, 0xea, 0x8c, 0x01, 0x00, 0xe3, 0xf0
};

const size_t sizeof_ctx8Pruned = sizeof(ctx8Pruned);

/* The commitment Merkle root of the above ctx8Pruned Simplicity expression. */
const uint32_t ctx8Pruned_cmr[] = {
  0x78f493f7u, 0x2b4e1e9bu, 0x2c85fccdu, 0xaf4141cfu, 0x95e12313u, 0x5c799804u, 0xbe70342fu, 0x1751e4b4u
};

/* The identity Merkle root of the above ctx8Pruned Simplicity expression. */
const uint32_t ctx8Pruned_imr[] = {
  0xc40acde5u, 0x5d44db2du, 0x624b2bf8u, 0x296d15eau, 0xef374d2du, 0xcc86a256u, 0x757e5af7u, 0xfd7c27c8u
};

/* The annotated Merkle root of the above ctx8Pruned Simplicity expression. */
const uint32_t ctx8Pruned_amr[] = {
  0x1e45ed6du, 0x87f0a9cfu, 0x2875284au, 0x4c9f08cbu, 0x305ac379u, 0x1b86ae18u, 0x00a4f2b2u, 0x256d1299u
};

/* The cost of the above ctx8Pruned Simplicity expression in milli weight units. */
const ubounded ctx8Pruned_cost = 274149781;
