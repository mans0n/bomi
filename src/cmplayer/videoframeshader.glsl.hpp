unsigned char videoframeshader_glsl[] = {
  0x23, 0x69, 0x66, 0x64, 0x65, 0x66, 0x20, 0x55, 0x53, 0x45, 0x5f, 0x52,
  0x45, 0x43, 0x54, 0x41, 0x4e, 0x47, 0x4c, 0x45, 0x0a, 0x63, 0x6f, 0x6e,
  0x73, 0x74, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x64, 0x78, 0x79, 0x20,
  0x3d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x28, 0x31, 0x2e, 0x30, 0x2c, 0x20,
  0x31, 0x2e, 0x30, 0x2c, 0x20, 0x2d, 0x31, 0x2e, 0x30, 0x2c, 0x20, 0x30,
  0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x23, 0x65, 0x6c, 0x73, 0x65, 0x0a, 0x63,
  0x6f, 0x6e, 0x73, 0x74, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x64, 0x78,
  0x79, 0x20, 0x3d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x28, 0x31, 0x2e, 0x30,
  0x2f, 0x74, 0x65, 0x78, 0x57, 0x69, 0x64, 0x74, 0x68, 0x2c, 0x20, 0x31,
  0x2e, 0x30, 0x2f, 0x74, 0x65, 0x78, 0x48, 0x65, 0x69, 0x67, 0x68, 0x74,
  0x2c, 0x20, 0x2d, 0x31, 0x2e, 0x30, 0x2f, 0x74, 0x65, 0x78, 0x57, 0x69,
  0x64, 0x74, 0x68, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x23,
  0x65, 0x6e, 0x64, 0x69, 0x66, 0x0a, 0x0a, 0x23, 0x69, 0x66, 0x64, 0x65,
  0x66, 0x20, 0x55, 0x53, 0x45, 0x5f, 0x4b, 0x45, 0x52, 0x4e, 0x45, 0x4c,
  0x33, 0x78, 0x33, 0x0a, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x20, 0x69, 0x6e,
  0x74, 0x20, 0x6e, 0x43, 0x6f, 0x6f, 0x72, 0x64, 0x20, 0x3d, 0x20, 0x39,
  0x3b, 0x0a, 0x23, 0x65, 0x6c, 0x73, 0x65, 0x0a, 0x63, 0x6f, 0x6e, 0x73,
  0x74, 0x20, 0x69, 0x6e, 0x74, 0x20, 0x6e, 0x43, 0x6f, 0x6f, 0x72, 0x64,
  0x20, 0x3d, 0x20, 0x31, 0x3b, 0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 0x66,
  0x0a, 0x0a, 0x23, 0x69, 0x66, 0x64, 0x65, 0x66, 0x20, 0x55, 0x53, 0x45,
  0x5f, 0x44, 0x45, 0x49, 0x4e, 0x54, 0x0a, 0x23, 0x69, 0x66, 0x20, 0x55,
  0x53, 0x45, 0x5f, 0x44, 0x45, 0x49, 0x4e, 0x54, 0x20, 0x3d, 0x3d, 0x20,
  0x32, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x44, 0x45,
  0x49, 0x4e, 0x54, 0x5f, 0x4c, 0x49, 0x4e, 0x0a, 0x23, 0x65, 0x6e, 0x64,
  0x69, 0x66, 0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 0x66, 0x0a, 0x0a, 0x23,
  0x69, 0x66, 0x64, 0x65, 0x66, 0x20, 0x44, 0x45, 0x49, 0x4e, 0x54, 0x5f,
  0x4c, 0x49, 0x4e, 0x0a, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x20, 0x69, 0x6e,
  0x74, 0x20, 0x6e, 0x50, 0x6f, 0x73, 0x20, 0x3d, 0x20, 0x32, 0x3b, 0x0a,
  0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x66, 0x6c, 0x6f, 0x61,
  0x74, 0x20, 0x64, 0x65, 0x69, 0x6e, 0x74, 0x4d, 0x69, 0x78, 0x65, 0x73,
  0x5b, 0x6e, 0x50, 0x6f, 0x73, 0x5d, 0x3b, 0x0a, 0x23, 0x65, 0x6c, 0x73,
  0x65, 0x0a, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x20, 0x69, 0x6e, 0x74, 0x20,
  0x6e, 0x50, 0x6f, 0x73, 0x20, 0x3d, 0x20, 0x31, 0x3b, 0x0a, 0x23, 0x65,
  0x6e, 0x64, 0x69, 0x66, 0x0a, 0x0a, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x20,
  0x69, 0x6e, 0x74, 0x20, 0x69, 0x4d, 0x43, 0x20, 0x3d, 0x20, 0x30, 0x2a,
  0x6e, 0x50, 0x6f, 0x73, 0x3b, 0x0a, 0x23, 0x69, 0x66, 0x64, 0x65, 0x66,
  0x20, 0x55, 0x53, 0x45, 0x5f, 0x4b, 0x45, 0x52, 0x4e, 0x45, 0x4c, 0x33,
  0x78, 0x33, 0x0a, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x20, 0x69, 0x6e, 0x74,
  0x20, 0x69, 0x4d, 0x52, 0x20, 0x3d, 0x20, 0x31, 0x2a, 0x6e, 0x50, 0x6f,
  0x73, 0x3b, 0x0a, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x20, 0x69, 0x6e, 0x74,
  0x20, 0x69, 0x4d, 0x4c, 0x20, 0x3d, 0x20, 0x32, 0x2a, 0x6e, 0x50, 0x6f,
  0x73, 0x3b, 0x0a, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x20, 0x69, 0x6e, 0x74,
  0x20, 0x69, 0x54, 0x43, 0x20, 0x3d, 0x20, 0x33, 0x2a, 0x6e, 0x50, 0x6f,
  0x73, 0x3b, 0x0a, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x20, 0x69, 0x6e, 0x74,
  0x20, 0x69, 0x54, 0x4c, 0x20, 0x3d, 0x20, 0x34, 0x2a, 0x6e, 0x50, 0x6f,
  0x73, 0x3b, 0x0a, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x20, 0x69, 0x6e, 0x74,
  0x20, 0x69, 0x54, 0x52, 0x20, 0x3d, 0x20, 0x35, 0x2a, 0x6e, 0x50, 0x6f,
  0x73, 0x3b, 0x0a, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x20, 0x69, 0x6e, 0x74,
  0x20, 0x69, 0x42, 0x52, 0x20, 0x3d, 0x20, 0x36, 0x2a, 0x6e, 0x50, 0x6f,
  0x73, 0x3b, 0x0a, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x20, 0x69, 0x6e, 0x74,
  0x20, 0x69, 0x42, 0x4c, 0x20, 0x3d, 0x20, 0x37, 0x2a, 0x6e, 0x50, 0x6f,
  0x73, 0x3b, 0x0a, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x20, 0x69, 0x6e, 0x74,
  0x20, 0x69, 0x42, 0x43, 0x20, 0x3d, 0x20, 0x38, 0x2a, 0x6e, 0x50, 0x6f,
  0x73, 0x3b, 0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 0x66, 0x0a, 0x0a, 0x76,
  0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20,
  0x74, 0x65, 0x78, 0x43, 0x6f, 0x6f, 0x72, 0x64, 0x73, 0x30, 0x5b, 0x6e,
  0x43, 0x6f, 0x6f, 0x72, 0x64, 0x2a, 0x6e, 0x50, 0x6f, 0x73, 0x5d, 0x3b,
  0x0a, 0x23, 0x69, 0x66, 0x20, 0x28, 0x54, 0x45, 0x58, 0x5f, 0x43, 0x4f,
  0x55, 0x4e, 0x54, 0x20, 0x3e, 0x20, 0x31, 0x29, 0x0a, 0x76, 0x61, 0x72,
  0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x74, 0x65,
  0x78, 0x43, 0x6f, 0x6f, 0x72, 0x64, 0x73, 0x31, 0x5b, 0x6e, 0x43, 0x6f,
  0x6f, 0x72, 0x64, 0x2a, 0x6e, 0x50, 0x6f, 0x73, 0x5d, 0x3b, 0x0a, 0x23,
  0x69, 0x66, 0x20, 0x28, 0x54, 0x45, 0x58, 0x5f, 0x43, 0x4f, 0x55, 0x4e,
  0x54, 0x20, 0x3e, 0x20, 0x32, 0x29, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69,
  0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x74, 0x65, 0x78, 0x43,
  0x6f, 0x6f, 0x72, 0x64, 0x73, 0x32, 0x5b, 0x6e, 0x43, 0x6f, 0x6f, 0x72,
  0x64, 0x2a, 0x6e, 0x50, 0x6f, 0x73, 0x5d, 0x3b, 0x0a, 0x23, 0x65, 0x6e,
  0x64, 0x69, 0x66, 0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 0x66, 0x0a, 0x0a,
  0x2f, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a,
  0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a,
  0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a,
  0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a,
  0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a,
  0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a,
  0x2f, 0x0a, 0x0a, 0x23, 0x69, 0x66, 0x64, 0x65, 0x66, 0x20, 0x46, 0x52,
  0x41, 0x47, 0x4d, 0x45, 0x4e, 0x54, 0x0a, 0x23, 0x69, 0x66, 0x64, 0x65,
  0x66, 0x20, 0x55, 0x53, 0x45, 0x5f, 0x52, 0x45, 0x43, 0x54, 0x41, 0x4e,
  0x47, 0x4c, 0x45, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20,
  0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x73, 0x61,
  0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x52, 0x65, 0x63, 0x74, 0x0a,
  0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x74, 0x65, 0x78, 0x74,
  0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72,
  0x65, 0x32, 0x44, 0x52, 0x65, 0x63, 0x74, 0x0a, 0x23, 0x65, 0x6e, 0x64,
  0x69, 0x66, 0x0a, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20,
  0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x74, 0x65,
  0x78, 0x30, 0x2c, 0x20, 0x74, 0x65, 0x78, 0x31, 0x2c, 0x20, 0x74, 0x65,
  0x78, 0x32, 0x3b, 0x0a, 0x0a, 0x2f, 0x2f, 0x20, 0x57, 0x54, 0x46, 0x20,
  0x6e, 0x6f, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x65, 0x78, 0x70, 0x72,
  0x20, 0x74, 0x72, 0x61, 0x6e, 0x73, 0x66, 0x65, 0x72, 0x20, 0x77, 0x69,
  0x74, 0x68, 0x20, 0x69, 0x6e, 0x64, 0x65, 0x78, 0x20, 0x69, 0x6e, 0x20,
  0x41, 0x70, 0x70, 0x6c, 0x65, 0x27, 0x73, 0x20, 0x64, 0x72, 0x69, 0x76,
  0x65, 0x72, 0x2e, 0x2e, 0x2e, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e,
  0x65, 0x20, 0x54, 0x45, 0x58, 0x54, 0x55, 0x52, 0x45, 0x5f, 0x30, 0x28,
  0x69, 0x29, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44,
  0x28, 0x74, 0x65, 0x78, 0x30, 0x2c, 0x20, 0x74, 0x65, 0x78, 0x43, 0x6f,
  0x6f, 0x72, 0x64, 0x73, 0x30, 0x5b, 0x69, 0x5d, 0x29, 0x0a, 0x23, 0x69,
  0x66, 0x20, 0x54, 0x45, 0x58, 0x5f, 0x43, 0x4f, 0x55, 0x4e, 0x54, 0x20,
  0x3e, 0x20, 0x31, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20,
  0x54, 0x45, 0x58, 0x54, 0x55, 0x52, 0x45, 0x5f, 0x31, 0x28, 0x69, 0x29,
  0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x28, 0x74,
  0x65, 0x78, 0x31, 0x2c, 0x20, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6f, 0x72,
  0x64, 0x73, 0x31, 0x5b, 0x69, 0x5d, 0x29, 0x0a, 0x23, 0x69, 0x66, 0x20,
  0x54, 0x45, 0x58, 0x5f, 0x43, 0x4f, 0x55, 0x4e, 0x54, 0x20, 0x3e, 0x20,
  0x32, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x54, 0x45,
  0x58, 0x54, 0x55, 0x52, 0x45, 0x5f, 0x32, 0x28, 0x69, 0x29, 0x20, 0x74,
  0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x28, 0x74, 0x65, 0x78,
  0x32, 0x2c, 0x20, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6f, 0x72, 0x64, 0x73,
  0x32, 0x5b, 0x69, 0x5d, 0x29, 0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 0x66,
  0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 0x66, 0x0a, 0x0a, 0x23, 0x69, 0x66,
  0x20, 0x28, 0x54, 0x45, 0x58, 0x5f, 0x43, 0x4f, 0x55, 0x4e, 0x54, 0x20,
  0x3d, 0x3d, 0x20, 0x31, 0x29, 0x0a, 0x76, 0x65, 0x63, 0x33, 0x20, 0x74,
  0x65, 0x78, 0x65, 0x6c, 0x28, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x20, 0x69,
  0x6e, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x65, 0x78, 0x30, 0x29,
  0x3b, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x54, 0x45,
  0x58, 0x45, 0x4c, 0x28, 0x69, 0x29, 0x20, 0x74, 0x65, 0x78, 0x65, 0x6c,
  0x28, 0x54, 0x45, 0x58, 0x54, 0x55, 0x52, 0x45, 0x5f, 0x30, 0x28, 0x69,
  0x29, 0x29, 0x0a, 0x23, 0x65, 0x6c, 0x69, 0x66, 0x20, 0x28, 0x54, 0x45,
  0x58, 0x5f, 0x43, 0x4f, 0x55, 0x4e, 0x54, 0x20, 0x3d, 0x3d, 0x20, 0x32,
  0x29, 0x0a, 0x76, 0x65, 0x63, 0x33, 0x20, 0x74, 0x65, 0x78, 0x65, 0x6c,
  0x28, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x20, 0x69, 0x6e, 0x20, 0x76, 0x65,
  0x63, 0x34, 0x20, 0x74, 0x65, 0x78, 0x30, 0x2c, 0x20, 0x63, 0x6f, 0x6e,
  0x73, 0x74, 0x20, 0x69, 0x6e, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74,
  0x65, 0x78, 0x31, 0x29, 0x3b, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e,
  0x65, 0x20, 0x54, 0x45, 0x58, 0x45, 0x4c, 0x28, 0x69, 0x29, 0x20, 0x74,
  0x65, 0x78, 0x65, 0x6c, 0x28, 0x54, 0x45, 0x58, 0x54, 0x55, 0x52, 0x45,
  0x5f, 0x30, 0x28, 0x69, 0x29, 0x2c, 0x20, 0x54, 0x45, 0x58, 0x54, 0x55,
  0x52, 0x45, 0x5f, 0x31, 0x28, 0x69, 0x29, 0x29, 0x0a, 0x23, 0x65, 0x6c,
  0x69, 0x66, 0x20, 0x28, 0x54, 0x45, 0x58, 0x5f, 0x43, 0x4f, 0x55, 0x4e,
  0x54, 0x20, 0x3d, 0x3d, 0x20, 0x33, 0x29, 0x0a, 0x76, 0x65, 0x63, 0x33,
  0x20, 0x74, 0x65, 0x78, 0x65, 0x6c, 0x28, 0x63, 0x6f, 0x6e, 0x73, 0x74,
  0x20, 0x69, 0x6e, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x65, 0x78,
  0x30, 0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x20, 0x69, 0x6e, 0x20,
  0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x65, 0x78, 0x31, 0x2c, 0x20, 0x63,
  0x6f, 0x6e, 0x73, 0x74, 0x20, 0x69, 0x6e, 0x20, 0x76, 0x65, 0x63, 0x34,
  0x20, 0x74, 0x65, 0x78, 0x32, 0x29, 0x3b, 0x0a, 0x23, 0x64, 0x65, 0x66,
  0x69, 0x6e, 0x65, 0x20, 0x54, 0x45, 0x58, 0x45, 0x4c, 0x28, 0x69, 0x29,
  0x20, 0x74, 0x65, 0x78, 0x65, 0x6c, 0x28, 0x54, 0x45, 0x58, 0x54, 0x55,
  0x52, 0x45, 0x5f, 0x30, 0x28, 0x69, 0x29, 0x2c, 0x20, 0x54, 0x45, 0x58,
  0x54, 0x55, 0x52, 0x45, 0x5f, 0x31, 0x28, 0x69, 0x29, 0x2c, 0x20, 0x54,
  0x45, 0x58, 0x54, 0x55, 0x52, 0x45, 0x5f, 0x32, 0x28, 0x69, 0x29, 0x29,
  0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 0x66, 0x0a, 0x0a, 0x23, 0x69, 0x66,
  0x64, 0x65, 0x66, 0x20, 0x44, 0x45, 0x49, 0x4e, 0x54, 0x5f, 0x4c, 0x49,
  0x4e, 0x0a, 0x2f, 0x2f, 0x20, 0x4c, 0x69, 0x6e, 0x65, 0x61, 0x72, 0x42,
  0x6f, 0x62, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x44,
  0x45, 0x49, 0x4e, 0x54, 0x28, 0x69, 0x29, 0x20, 0x6d, 0x69, 0x78, 0x28,
  0x54, 0x45, 0x58, 0x45, 0x4c, 0x28, 0x69, 0x29, 0x2c, 0x20, 0x54, 0x45,
  0x58, 0x45, 0x4c, 0x28, 0x69, 0x2b, 0x31, 0x29, 0x2c, 0x20, 0x64, 0x65,
  0x69, 0x6e, 0x74, 0x4d, 0x69, 0x78, 0x65, 0x73, 0x5b, 0x69, 0x5d, 0x29,
  0x0a, 0x23, 0x65, 0x6c, 0x73, 0x65, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69,
  0x6e, 0x65, 0x20, 0x44, 0x45, 0x49, 0x4e, 0x54, 0x20, 0x54, 0x45, 0x58,
  0x45, 0x4c, 0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 0x66, 0x0a, 0x0a, 0x23,
  0x69, 0x66, 0x64, 0x65, 0x66, 0x20, 0x55, 0x53, 0x45, 0x5f, 0x4b, 0x45,
  0x52, 0x4e, 0x45, 0x4c, 0x33, 0x78, 0x33, 0x0a, 0x75, 0x6e, 0x69, 0x66,
  0x6f, 0x72, 0x6d, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x6b, 0x65,
  0x72, 0x6e, 0x5f, 0x63, 0x2c, 0x20, 0x6b, 0x65, 0x72, 0x6e, 0x5f, 0x6e,
  0x2c, 0x20, 0x6b, 0x65, 0x72, 0x6e, 0x5f, 0x64, 0x3b, 0x0a, 0x23, 0x65,
  0x6e, 0x64, 0x69, 0x66, 0x0a, 0x76, 0x65, 0x63, 0x33, 0x20, 0x66, 0x69,
  0x6c, 0x74, 0x65, 0x72, 0x65, 0x64, 0x28, 0x29, 0x20, 0x7b, 0x0a, 0x20,
  0x20, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x54, 0x45,
  0x58, 0x45, 0x4c, 0x28, 0x69, 0x4d, 0x43, 0x29, 0x3b, 0x0a, 0x23, 0x69,
  0x66, 0x64, 0x65, 0x66, 0x20, 0x55, 0x53, 0x45, 0x5f, 0x4b, 0x45, 0x52,
  0x4e, 0x45, 0x4c, 0x33, 0x78, 0x33, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x76,
  0x65, 0x63, 0x33, 0x20, 0x63, 0x20, 0x3d, 0x20, 0x44, 0x45, 0x49, 0x4e,
  0x54, 0x28, 0x69, 0x4d, 0x43, 0x29, 0x2a, 0x6b, 0x65, 0x72, 0x6e, 0x5f,
  0x63, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x63, 0x20, 0x2b, 0x3d, 0x20,
  0x28, 0x44, 0x45, 0x49, 0x4e, 0x54, 0x28, 0x69, 0x54, 0x43, 0x29, 0x2b,
  0x44, 0x45, 0x49, 0x4e, 0x54, 0x28, 0x69, 0x42, 0x43, 0x29, 0x2b, 0x44,
  0x45, 0x49, 0x4e, 0x54, 0x28, 0x69, 0x4d, 0x4c, 0x29, 0x2b, 0x44, 0x45,
  0x49, 0x4e, 0x54, 0x28, 0x69, 0x4d, 0x52, 0x29, 0x29, 0x2a, 0x6b, 0x65,
  0x72, 0x6e, 0x5f, 0x6e, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x63, 0x20,
  0x2b, 0x3d, 0x20, 0x28, 0x44, 0x45, 0x49, 0x4e, 0x54, 0x28, 0x69, 0x54,
  0x4c, 0x29, 0x2b, 0x44, 0x45, 0x49, 0x4e, 0x54, 0x28, 0x69, 0x54, 0x52,
  0x29, 0x2b, 0x44, 0x45, 0x49, 0x4e, 0x54, 0x28, 0x69, 0x42, 0x4c, 0x29,
  0x2b, 0x44, 0x45, 0x49, 0x4e, 0x54, 0x28, 0x69, 0x42, 0x52, 0x29, 0x29,
  0x2a, 0x6b, 0x65, 0x72, 0x6e, 0x5f, 0x64, 0x3b, 0x0a, 0x20, 0x20, 0x20,
  0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x63, 0x3b, 0x0a, 0x23,
  0x65, 0x6c, 0x73, 0x65, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x74,
  0x75, 0x72, 0x6e, 0x20, 0x44, 0x45, 0x49, 0x4e, 0x54, 0x28, 0x69, 0x4d,
  0x43, 0x29, 0x3b, 0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 0x66, 0x0a, 0x7d,
  0x0a, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61,
  0x74, 0x33, 0x20, 0x6d, 0x75, 0x6c, 0x5f, 0x6d, 0x61, 0x74, 0x3b, 0x0a,
  0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x33,
  0x20, 0x73, 0x75, 0x62, 0x5f, 0x76, 0x65, 0x63, 0x2c, 0x20, 0x61, 0x64,
  0x64, 0x5f, 0x76, 0x65, 0x63, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20,
  0x6d, 0x61, 0x69, 0x6e, 0x28, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20,
  0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20,
  0x6f, 0x6e, 0x65, 0x20, 0x3d, 0x20, 0x76, 0x65, 0x63, 0x32, 0x28, 0x31,
  0x2e, 0x30, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x2f, 0x2f,
  0x20, 0x20, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43,
  0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x74, 0x65, 0x78, 0x65, 0x6c,
  0x28, 0x69, 0x4d, 0x43, 0x29, 0x2e, 0x72, 0x67, 0x62, 0x72, 0x2a, 0x6f,
  0x6e, 0x65, 0x2e, 0x78, 0x78, 0x78, 0x79, 0x20, 0x2b, 0x20, 0x6f, 0x6e,
  0x65, 0x2e, 0x79, 0x79, 0x79, 0x78, 0x3b, 0x2f, 0x2f, 0x74, 0x65, 0x78,
  0x30, 0x2c, 0x20, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6f, 0x72, 0x64, 0x73,
  0x30, 0x5b, 0x30, 0x5d, 0x29, 0x3b, 0x0a, 0x2f, 0x2f, 0x20, 0x20, 0x20,
  0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x3b, 0x0a, 0x20, 0x20, 0x20,
  0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x74, 0x65, 0x78, 0x20, 0x3d, 0x20,
  0x66, 0x69, 0x6c, 0x74, 0x65, 0x72, 0x65, 0x64, 0x28, 0x29, 0x3b, 0x0a,
  0x20, 0x20, 0x20, 0x20, 0x74, 0x65, 0x78, 0x20, 0x2d, 0x3d, 0x20, 0x73,
  0x75, 0x62, 0x5f, 0x76, 0x65, 0x63, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20,
  0x74, 0x65, 0x78, 0x20, 0x2a, 0x3d, 0x20, 0x6d, 0x75, 0x6c, 0x5f, 0x6d,
  0x61, 0x74, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x65, 0x78, 0x20,
  0x2b, 0x3d, 0x20, 0x61, 0x64, 0x64, 0x5f, 0x76, 0x65, 0x63, 0x3b, 0x0a,
  0x20, 0x20, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43,
  0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x74, 0x65, 0x78, 0x2e, 0x72,
  0x67, 0x62, 0x72, 0x2a, 0x6f, 0x6e, 0x65, 0x2e, 0x78, 0x78, 0x78, 0x79,
  0x20, 0x2b, 0x20, 0x6f, 0x6e, 0x65, 0x2e, 0x79, 0x79, 0x79, 0x78, 0x3b,
  0x0a, 0x7d, 0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 0x66, 0x0a, 0x2f, 0x2f,
  0x20, 0x46, 0x52, 0x41, 0x47, 0x4d, 0x45, 0x4e, 0x54, 0x0a, 0x0a, 0x2f,
  0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a,
  0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a,
  0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a,
  0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a,
  0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a,
  0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2a, 0x2f,
  0x0a, 0x0a, 0x23, 0x69, 0x66, 0x64, 0x65, 0x66, 0x20, 0x56, 0x45, 0x52,
  0x54, 0x45, 0x58, 0x0a, 0x2f, 0x2f, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72,
  0x6d, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x63, 0x63, 0x30, 0x2c, 0x20,
  0x63, 0x63, 0x31, 0x2c, 0x20, 0x63, 0x63, 0x32, 0x3b, 0x20, 0x2f, 0x2f,
  0x20, 0x73, 0x74, 0x72, 0x69, 0x64, 0x65, 0x20, 0x43, 0x6f, 0x72, 0x72,
  0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x66, 0x6f, 0x72, 0x20, 0x74,
  0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x20, 0x43, 0x6f, 0x6f, 0x72, 0x64,
  0x69, 0x6e, 0x61, 0x74, 0x65, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72,
  0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x76, 0x4d, 0x61, 0x74, 0x72,
  0x69, 0x78, 0x3b, 0x0a, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74,
  0x65, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, 0x50, 0x6f, 0x73, 0x69,
  0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62,
  0x75, 0x74, 0x65, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x76, 0x43, 0x6f,
  0x6f, 0x72, 0x64, 0x3b, 0x0a, 0x0a, 0x23, 0x69, 0x66, 0x64, 0x65, 0x66,
  0x20, 0x55, 0x53, 0x45, 0x5f, 0x44, 0x45, 0x49, 0x4e, 0x54, 0x0a, 0x75,
  0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74,
  0x20, 0x74, 0x6f, 0x70, 0x5f, 0x66, 0x69, 0x65, 0x6c, 0x64, 0x2c, 0x20,
  0x64, 0x65, 0x69, 0x6e, 0x74, 0x3b, 0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69,
  0x66, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x66, 0x69, 0x6c, 0x6c, 0x5f,
  0x64, 0x65, 0x69, 0x6e, 0x74, 0x43, 0x6f, 0x6f, 0x72, 0x64, 0x73, 0x28,
  0x63, 0x6f, 0x6e, 0x73, 0x74, 0x20, 0x69, 0x6e, 0x20, 0x69, 0x6e, 0x74,
  0x20, 0x69, 0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x20, 0x69, 0x6e,
  0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x29,
  0x20, 0x7b, 0x0a, 0x23, 0x69, 0x66, 0x64, 0x65, 0x66, 0x20, 0x55, 0x53,
  0x45, 0x5f, 0x44, 0x45, 0x49, 0x4e, 0x54, 0x0a, 0x20, 0x20, 0x20, 0x20,
  0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74,
  0x20, 0x3d, 0x20, 0x64, 0x65, 0x69, 0x6e, 0x74, 0x2a, 0x28, 0x74, 0x6f,
  0x70, 0x5f, 0x66, 0x69, 0x65, 0x6c, 0x64, 0x2a, 0x64, 0x78, 0x79, 0x2e,
  0x79, 0x20, 0x2b, 0x20, 0x64, 0x78, 0x79, 0x2e, 0x79, 0x2a, 0x30, 0x2e,
  0x35, 0x20, 0x2b, 0x20, 0x6d, 0x6f, 0x64, 0x28, 0x63, 0x6f, 0x6f, 0x72,
  0x64, 0x2e, 0x79, 0x2c, 0x20, 0x32, 0x2e, 0x30, 0x2a, 0x64, 0x78, 0x79,
  0x2e, 0x79, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x65,
  0x78, 0x43, 0x6f, 0x6f, 0x72, 0x64, 0x73, 0x30, 0x5b, 0x69, 0x5d, 0x20,
  0x3d, 0x20, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x20, 0x2b, 0x20, 0x76, 0x65,
  0x63, 0x32, 0x28, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x2d, 0x6f, 0x66, 0x66,
  0x73, 0x65, 0x74, 0x29, 0x3b, 0x0a, 0x23, 0x69, 0x66, 0x64, 0x65, 0x66,
  0x20, 0x44, 0x45, 0x49, 0x4e, 0x54, 0x5f, 0x4c, 0x49, 0x4e, 0x0a, 0x20,
  0x20, 0x20, 0x20, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6f, 0x72, 0x64, 0x73,
  0x30, 0x5b, 0x69, 0x2b, 0x31, 0x5d, 0x20, 0x3d, 0x20, 0x63, 0x6f, 0x6f,
  0x72, 0x64, 0x20, 0x2b, 0x20, 0x76, 0x65, 0x63, 0x32, 0x28, 0x30, 0x2e,
  0x30, 0x2c, 0x20, 0x32, 0x2e, 0x30, 0x2a, 0x64, 0x78, 0x79, 0x2e, 0x79,
  0x2d, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x29, 0x3b, 0x0a, 0x20, 0x20,
  0x20, 0x20, 0x64, 0x65, 0x69, 0x6e, 0x74, 0x4d, 0x69, 0x78, 0x65, 0x73,
  0x5b, 0x69, 0x5d, 0x20, 0x3d, 0x20, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74,
  0x2f, 0x28, 0x32, 0x2e, 0x30, 0x2a, 0x64, 0x78, 0x79, 0x2e, 0x79, 0x29,
  0x3b, 0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 0x66, 0x0a, 0x23, 0x65, 0x6c,
  0x73, 0x65, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x65, 0x78, 0x43, 0x6f,
  0x6f, 0x72, 0x64, 0x73, 0x30, 0x5b, 0x69, 0x5d, 0x20, 0x3d, 0x20, 0x63,
  0x6f, 0x6f, 0x72, 0x64, 0x3b, 0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 0x66,
  0x0a, 0x23, 0x69, 0x66, 0x20, 0x28, 0x54, 0x45, 0x58, 0x5f, 0x43, 0x4f,
  0x55, 0x4e, 0x54, 0x20, 0x3e, 0x20, 0x31, 0x29, 0x0a, 0x20, 0x20, 0x20,
  0x20, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6f, 0x72, 0x64, 0x73, 0x31, 0x5b,
  0x69, 0x5d, 0x20, 0x3d, 0x20, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6f, 0x72,
  0x64, 0x73, 0x30, 0x5b, 0x69, 0x5d, 0x2a, 0x63, 0x63, 0x31, 0x3b, 0x0a,
  0x23, 0x69, 0x66, 0x64, 0x65, 0x66, 0x20, 0x44, 0x45, 0x49, 0x4e, 0x54,
  0x5f, 0x4c, 0x49, 0x4e, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x65, 0x78,
  0x43, 0x6f, 0x6f, 0x72, 0x64, 0x73, 0x31, 0x5b, 0x69, 0x2b, 0x31, 0x5d,
  0x20, 0x3d, 0x20, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6f, 0x72, 0x64, 0x73,
  0x30, 0x5b, 0x69, 0x2b, 0x31, 0x5d, 0x2a, 0x63, 0x63, 0x31, 0x3b, 0x0a,
  0x23, 0x65, 0x6e, 0x64, 0x69, 0x66, 0x0a, 0x23, 0x69, 0x66, 0x20, 0x28,
  0x54, 0x45, 0x58, 0x5f, 0x43, 0x4f, 0x55, 0x4e, 0x54, 0x20, 0x3e, 0x20,
  0x32, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x65, 0x78, 0x43, 0x6f,
  0x6f, 0x72, 0x64, 0x73, 0x32, 0x5b, 0x69, 0x5d, 0x20, 0x3d, 0x20, 0x74,
  0x65, 0x78, 0x43, 0x6f, 0x6f, 0x72, 0x64, 0x73, 0x30, 0x5b, 0x69, 0x5d,
  0x2a, 0x63, 0x63, 0x32, 0x3b, 0x0a, 0x23, 0x69, 0x66, 0x64, 0x65, 0x66,
  0x20, 0x44, 0x45, 0x49, 0x4e, 0x54, 0x5f, 0x4c, 0x49, 0x4e, 0x0a, 0x20,
  0x20, 0x20, 0x20, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6f, 0x72, 0x64, 0x73,
  0x32, 0x5b, 0x69, 0x2b, 0x31, 0x5d, 0x20, 0x3d, 0x20, 0x74, 0x65, 0x78,
  0x43, 0x6f, 0x6f, 0x72, 0x64, 0x73, 0x30, 0x5b, 0x69, 0x2b, 0x31, 0x5d,
  0x2a, 0x63, 0x63, 0x32, 0x3b, 0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 0x66,
  0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 0x66, 0x0a, 0x23, 0x65, 0x6e, 0x64,
  0x69, 0x66, 0x0a, 0x7d, 0x0a, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x66,
  0x69, 0x6c, 0x6c, 0x5f, 0x43, 0x6f, 0x6f, 0x72, 0x64, 0x73, 0x28, 0x63,
  0x6f, 0x6e, 0x73, 0x74, 0x20, 0x69, 0x6e, 0x20, 0x76, 0x65, 0x63, 0x32,
  0x20, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20,
  0x20, 0x20, 0x66, 0x69, 0x6c, 0x6c, 0x5f, 0x64, 0x65, 0x69, 0x6e, 0x74,
  0x43, 0x6f, 0x6f, 0x72, 0x64, 0x73, 0x28, 0x69, 0x4d, 0x43, 0x2c, 0x20,
  0x63, 0x6f, 0x6f, 0x72, 0x64, 0x29, 0x3b, 0x0a, 0x23, 0x69, 0x66, 0x64,
  0x65, 0x66, 0x20, 0x55, 0x53, 0x45, 0x5f, 0x4b, 0x45, 0x52, 0x4e, 0x45,
  0x4c, 0x33, 0x78, 0x33, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x69, 0x6c,
  0x6c, 0x5f, 0x64, 0x65, 0x69, 0x6e, 0x74, 0x43, 0x6f, 0x6f, 0x72, 0x64,
  0x73, 0x28, 0x69, 0x54, 0x43, 0x2c, 0x20, 0x63, 0x6f, 0x6f, 0x72, 0x64,
  0x20, 0x2b, 0x20, 0x64, 0x78, 0x79, 0x2e, 0x77, 0x79, 0x29, 0x3b, 0x20,
  0x2f, 0x2f, 0x20, 0x74, 0x6f, 0x70, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66,
  0x69, 0x6c, 0x6c, 0x5f, 0x64, 0x65, 0x69, 0x6e, 0x74, 0x43, 0x6f, 0x6f,
  0x72, 0x64, 0x73, 0x28, 0x69, 0x4d, 0x4c, 0x2c, 0x20, 0x63, 0x6f, 0x6f,
  0x72, 0x64, 0x20, 0x2b, 0x20, 0x64, 0x78, 0x79, 0x2e, 0x7a, 0x77, 0x29,
  0x3b, 0x20, 0x2f, 0x2f, 0x20, 0x6c, 0x65, 0x66, 0x74, 0x0a, 0x20, 0x20,
  0x20, 0x20, 0x66, 0x69, 0x6c, 0x6c, 0x5f, 0x64, 0x65, 0x69, 0x6e, 0x74,
  0x43, 0x6f, 0x6f, 0x72, 0x64, 0x73, 0x28, 0x69, 0x4d, 0x52, 0x2c, 0x20,
  0x63, 0x6f, 0x6f, 0x72, 0x64, 0x20, 0x2b, 0x20, 0x64, 0x78, 0x79, 0x2e,
  0x78, 0x77, 0x29, 0x3b, 0x20, 0x2f, 0x2f, 0x20, 0x72, 0x69, 0x67, 0x68,
  0x74, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x69, 0x6c, 0x6c, 0x5f, 0x64,
  0x65, 0x69, 0x6e, 0x74, 0x43, 0x6f, 0x6f, 0x72, 0x64, 0x73, 0x28, 0x69,
  0x42, 0x43, 0x2c, 0x20, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x20, 0x2d, 0x20,
  0x64, 0x78, 0x79, 0x2e, 0x77, 0x79, 0x29, 0x3b, 0x20, 0x2f, 0x2f, 0x20,
  0x62, 0x6f, 0x74, 0x74, 0x6f, 0x6d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66,
  0x69, 0x6c, 0x6c, 0x5f, 0x64, 0x65, 0x69, 0x6e, 0x74, 0x43, 0x6f, 0x6f,
  0x72, 0x64, 0x73, 0x28, 0x69, 0x54, 0x4c, 0x2c, 0x20, 0x63, 0x6f, 0x6f,
  0x72, 0x64, 0x20, 0x2b, 0x20, 0x64, 0x78, 0x79, 0x2e, 0x7a, 0x79, 0x29,
  0x3b, 0x20, 0x2f, 0x2f, 0x20, 0x74, 0x6f, 0x70, 0x2d, 0x6c, 0x65, 0x66,
  0x74, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x69, 0x6c, 0x6c, 0x5f, 0x64,
  0x65, 0x69, 0x6e, 0x74, 0x43, 0x6f, 0x6f, 0x72, 0x64, 0x73, 0x28, 0x69,
  0x54, 0x52, 0x2c, 0x20, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x20, 0x2b, 0x20,
  0x64, 0x78, 0x79, 0x2e, 0x78, 0x79, 0x29, 0x3b, 0x20, 0x2f, 0x2f, 0x20,
  0x74, 0x6f, 0x70, 0x2d, 0x72, 0x69, 0x67, 0x68, 0x74, 0x0a, 0x20, 0x20,
  0x20, 0x20, 0x66, 0x69, 0x6c, 0x6c, 0x5f, 0x64, 0x65, 0x69, 0x6e, 0x74,
  0x43, 0x6f, 0x6f, 0x72, 0x64, 0x73, 0x28, 0x69, 0x42, 0x4c, 0x2c, 0x20,
  0x63, 0x6f, 0x6f, 0x72, 0x64, 0x20, 0x2d, 0x20, 0x64, 0x78, 0x79, 0x2e,
  0x78, 0x79, 0x29, 0x3b, 0x20, 0x2f, 0x2f, 0x20, 0x62, 0x6f, 0x74, 0x74,
  0x6f, 0x6d, 0x2d, 0x6c, 0x65, 0x66, 0x74, 0x0a, 0x20, 0x20, 0x20, 0x20,
  0x66, 0x69, 0x6c, 0x6c, 0x5f, 0x64, 0x65, 0x69, 0x6e, 0x74, 0x43, 0x6f,
  0x6f, 0x72, 0x64, 0x73, 0x28, 0x69, 0x42, 0x52, 0x2c, 0x20, 0x63, 0x6f,
  0x6f, 0x72, 0x64, 0x20, 0x2d, 0x20, 0x64, 0x78, 0x79, 0x2e, 0x7a, 0x79,
  0x29, 0x3b, 0x20, 0x2f, 0x2f, 0x20, 0x62, 0x6f, 0x74, 0x74, 0x6f, 0x6d,
  0x2d, 0x72, 0x69, 0x67, 0x68, 0x74, 0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69,
  0x66, 0x0a, 0x7d, 0x0a, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61,
  0x69, 0x6e, 0x28, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66,
  0x69, 0x6c, 0x6c, 0x5f, 0x43, 0x6f, 0x6f, 0x72, 0x64, 0x73, 0x28, 0x76,
  0x43, 0x6f, 0x6f, 0x72, 0x64, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20,
  0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20,
  0x3d, 0x20, 0x76, 0x4d, 0x61, 0x74, 0x72, 0x69, 0x78, 0x20, 0x2a, 0x20,
  0x76, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x7d,
  0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 0x66, 0x0a, 0x2f, 0x2f, 0x20, 0x56,
  0x45, 0x52, 0x54, 0x45, 0x58, 0x0a
};
unsigned int videoframeshader_glsl_len = 4074;
