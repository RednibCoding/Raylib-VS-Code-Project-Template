//////////////////////////////////////////////////////////////////////////////////
//                                                                              //
// StyleAsCode exporter v2.0 - Style data exported as a values array            //
//                                                                              //
// USAGE: On init call: GuiLoadStyleCandy();                                   //
//                                                                              //
// more info and bugs-report:  github.com/raysan5/raygui                        //
// feedback and support:       ray[at]raylibtech.com                            //
//                                                                              //
// Copyright (c) 2020-2024 raylib technologies (@raylibtech)                    //
//                                                                              //
//////////////////////////////////////////////////////////////////////////////////

#define CANDY_STYLE_PROPS_COUNT 17

// Custom style name: Candy
static const GuiStyleProp candyStyleProps[CANDY_STYLE_PROPS_COUNT] = {
    {0, 0, 0xe58b68ff},  // DEFAULT_BORDER_COLOR_NORMAL
    {0, 1, 0xfeda96ff},  // DEFAULT_BASE_COLOR_NORMAL
    {0, 2, 0xe59b5fff},  // DEFAULT_TEXT_COLOR_NORMAL
    {0, 3, 0xee813fff},  // DEFAULT_BORDER_COLOR_FOCUSED
    {0, 4, 0xfcd85bff},  // DEFAULT_BASE_COLOR_FOCUSED
    {0, 5, 0xfc6955ff},  // DEFAULT_TEXT_COLOR_FOCUSED
    {0, 6, 0xb34848ff},  // DEFAULT_BORDER_COLOR_PRESSED
    {0, 7, 0xeb7272ff},  // DEFAULT_BASE_COLOR_PRESSED
    {0, 8, 0xbd4a4aff},  // DEFAULT_TEXT_COLOR_PRESSED
    {0, 9, 0x94795dff},  // DEFAULT_BORDER_COLOR_DISABLED
    {0, 10, 0xc2a37aff}, // DEFAULT_BASE_COLOR_DISABLED
    {0, 11, 0x9c8369ff}, // DEFAULT_TEXT_COLOR_DISABLED
    {0, 16, 0x0000000f}, // DEFAULT_TEXT_SIZE
    {0, 17, 0x00000000}, // DEFAULT_TEXT_SPACING
    {0, 18, 0xd77575ff}, // DEFAULT_LINE_COLOR
    {0, 19, 0xfff5e1ff}, // DEFAULT_BACKGROUND_COLOR
    {0, 20, 0x00000016}, // DEFAULT_TEXT_LINE_SPACING
};

// WARNING: This style uses a custom font: "v5easter.ttf" (size: 15, spacing: 0)

#define CANDY_STYLE_FONT_ATLAS_COMP_SIZE 2260

// Font atlas image pixels data: DEFLATE compressed
static unsigned char candyFontData[CANDY_STYLE_FONT_ATLAS_COMP_SIZE] = {0xed,
                                                                        0xdd, 0x4d, 0x92, 0xd4, 0x38, 0x10, 0x06, 0x50, 0xdd, 0x80, 0xfb, 0xcc, 0x61, 0xe6, 0x4a, 0x73, 0x45, 0x8e, 0xc0, 0x86,
                                                                        0x25, 0xa1, 0x89, 0x61, 0x88, 0x20, 0x80, 0x2e, 0x4b, 0x4a, 0xa5, 0x6c, 0xd9, 0xf5, 0x78, 0x1b, 0xa2, 0xdd, 0x5d, 0x55,
                                                                        0xfe, 0xf9, 0x2c, 0xc9, 0x2e, 0xa5, 0x6b, 0x01, 0x00, 0x00, 0x00, 0xde, 0xdc, 0x7f, 0xff, 0xfe, 0xfc, 0x59, 0xf9, 0xe0,
                                                                        0xa7, 0x3f, 0x7f, 0xb7, 0x7e, 0xb8, 0xf4, 0x68, 0x49, 0xfc, 0x2f, 0x8f, 0x3f, 0x49, 0xdf, 0x2b, 0x94, 0x83, 0x25, 0xed,
                                                                        0xcf, 0xfc, 0xfb, 0xcf, 0x6a, 0xca, 0xbb, 0xbf, 0x7a, 0x9d, 0xd6, 0x27, 0x8a, 0x2c, 0x3b, 0x7a, 0xd5, 0x7a, 0xb0, 0x4e,
                                                                        0xa5, 0x63, 0x49, 0x0d, 0xad, 0x5d, 0x9d, 0xde, 0xab, 0x63, 0x7b, 0xa7, 0xbd, 0xfe, 0x65, 0x78, 0x1d, 0xcb, 0x82, 0x65,
                                                                        0x75, 0x72, 0x1f, 0xaf, 0xcc, 0xff, 0xef, 0xff, 0x32, 0xf3, 0x7f, 0xfc, 0x9a, 0x33, 0xc7, 0xc4, 0xcf, 0xb5, 0xa9, 0x09,
                                                                        0xf9, 0x1f, 0x3f, 0x8b, 0x1c, 0xaf, 0xc1, 0xeb, 0xa3, 0xb8, 0x0c, 0xff, 0x4d, 0xfb, 0xfc, 0x9a, 0xf9, 0xaa, 0x2b, 0x97,
                                                                        0xf5, 0xa5, 0x76, 0xfe, 0x38, 0x6f, 0x7d, 0x9a, 0xb9, 0x7d, 0x78, 0xe6, 0xb2, 0xdc, 0xfc, 0xb7, 0x7e, 0x37, 0x7a, 0x66,
                                                                        0x8f, 0xf7, 0x0e, 0x7a, 0x5b, 0xf3, 0x3a, 0x74, 0xec, 0xb7, 0x5b, 0xb1, 0x9c, 0x2d, 0x3c, 0xba, 0xc6, 0xc7, 0xe7, 0x92,
                                                                        0xd6, 0xd2, 0xf9, 0x36, 0x77, 0xe4, 0xd8, 0xb8, 0xe2, 0x28, 0x6e, 0xef, 0xcd, 0x8c, 0x76, 0xa9, 0xfe, 0xb2, 0xb5, 0xe5,
                                                                        0xbf, 0xf7, 0xa8, 0xad, 0x8b, 0x5b, 0xda, 0x32, 0xdc, 0xd2, 0xc6, 0xfa, 0x2c, 0x79, 0x5b, 0x38, 0x2b, 0xff, 0x75, 0x22,
                                                                        0xfd, 0x25, 0xd0, 0xe3, 0x3c, 0x3e, 0x6b, 0xb7, 0x3e, 0x7f, 0xf4, 0x28, 0xc9, 0x3d, 0x66, 0x67, 0xf3, 0x7f, 0xdc, 0x1f,
                                                                        0x2e, 0x87, 0xe7, 0x9b, 0xf3, 0x7a, 0x5c, 0x3b, 0xe5, 0x3f, 0xda, 0x43, 0xee, 0x1f, 0xdd, 0xe4, 0xb5, 0xff, 0xeb, 0xf3,
                                                                        0xdf, 0x4a, 0x64, 0x1d, 0x1c, 0xa9, 0xe6, 0xb6, 0xc6, 0x3d, 0xe3, 0xe9, 0xe8, 0x19, 0x7d, 0x7c, 0x8c, 0x7b, 0x7e, 0xff,
                                                                        0xbf, 0x3d, 0x6e, 0xac, 0xcb, 0x46, 0x4e, 0xf9, 0x09, 0xdb, 0xb7, 0xff, 0xdf, 0xd7, 0x2f, 0x58, 0xd3, 0xff, 0x6f, 0x8d,
                                                                        0xff, 0xcb, 0xe9, 0xad, 0x7f, 0x2b, 0x59, 0xf1, 0xbd, 0x5f, 0x43, 0x3d, 0xa0, 0xb9, 0xab, 0x0a, 0xb1, 0xfd, 0x39, 0x97,
                                                                        0xff, 0x15, 0x7d, 0x80, 0xd1, 0xd1, 0xdf, 0x33, 0xfa, 0xff, 0x91, 0x2d, 0x18, 0xbd, 0xce, 0x9c, 0xb5, 0x66, 0xe3, 0xd7,
                                                                        0xf9, 0xaf, 0xdb, 0x62, 0x79, 0xe7, 0xf9, 0xd9, 0x2d, 0x98, 0xff, 0xaa, 0xb1, 0x5e, 0xf5, 0xe8, 0x51, 0x5c, 0x2f, 0xbd,
                                                                        0x37, 0x56, 0x6f, 0x71, 0xe5, 0xf4, 0x8c, 0xf6, 0xbf, 0x75, 0xfd, 0x7f, 0xe6, 0xea, 0xc0, 0xd8, 0x9d, 0x8d, 0xba, 0xe1,
                                                                        0xb1, 0x22, 0xff, 0x77, 0x69, 0xc5, 0xb2, 0x7a, 0xd5, 0xae, 0xff, 0x45, 0xee, 0x69, 0x67, 0xf4, 0xe7, 0xee, 0x92, 0xff,
                                                                        0xda, 0x71, 0x36, 0xed, 0x5f, 0x12, 0xbf, 0xe3, 0xbe, 0xea, 0x5b, 0x05, 0xad, 0xbb, 0x8d, 0xe7, 0xdd, 0xc5, 0xde, 0x31,
                                                                        0xff, 0xf7, 0xb8, 0xff, 0xbf, 0xc7, 0xb6, 0x5c, 0x3b, 0x92, 0xdb, 0x31, 0xff, 0xf0, 0x1e, 0xdf, 0x26, 0x3c, 0xef, 0x5b,
                                                                        0x8b, 0xf2, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xdd, 0x67, 0xe7, 0xc4, 0x2b,
                                                                        0x44, 0x8e, 0xcd, 0xb9, 0xa9, 0x4b, 0xea, 0x22, 0xc5, 0xe6, 0x46, 0x9f, 0x5b, 0xc3, 0x39, 0x5a, 0x35, 0x7b, 0x6e, 0x5e,
                                                                        0xf8, 0xeb, 0x7a, 0x42, 0x33, 0xaf, 0x7b, 0x3c, 0x17, 0x79, 0x64, 0x5e, 0x76, 0xb4, 0xd6, 0xf9, 0x68, 0x4d, 0xa0, 0x48,
                                                                        0xed, 0xa4, 0xd9, 0xda, 0xe9, 0xe3, 0x6b, 0x1c, 0x99, 0xc1, 0x3a, 0x3b, 0xe7, 0xed, 0xac, 0x8a, 0xcd, 0xd1, 0x9c, 0xf6,
                                                                        0x55, 0xbd, 0xad, 0xc3, 0x95, 0xea, 0x76, 0xab, 0xd3, 0x90, 0x5d, 0x35, 0x63, 0x65, 0xfe, 0x4b, 0x57, 0x6d, 0xec, 0xbe,
                                                                        0xf9, 0xce, 0x35, 0x71, 0x46, 0xfb, 0x79, 0x35, 0xf7, 0xca, 0xf4, 0x3e, 0x19, 0x6d, 0xa9, 0x9e, 0x9f, 0xff, 0xe8, 0xba,
                                                                        0xb7, 0xb6, 0x6a, 0xdd, 0xb6, 0x8a, 0xfd, 0x95, 0xf9, 0x8f, 0xf6, 0xed, 0x8e, 0x5b, 0xbe, 0xf1, 0x8a, 0x07, 0xe7, 0x54,
                                                                        0xb4, 0xa9, 0x1b, 0xe5, 0x7f, 0xfc, 0xdd, 0x56, 0xce, 0x61, 0x9f, 0x6b, 0x7b, 0x6b, 0x5a, 0xfe, 0xe3, 0x7d, 0x9f, 0xdd,
                                                                        0xda, 0xf8, 0xdc, 0xaa, 0x39, 0xeb, 0xf2, 0x5f, 0xd2, 0xab, 0x32, 0xed, 0x99, 0xff, 0x9e, 0xf6, 0x21, 0x32, 0x36, 0x18,
                                                                        0xff, 0xcb, 0xe8, 0x19, 0x77, 0xf4, 0xdd, 0x22, 0xed, 0xff, 0xf1, 0x5a, 0xde, 0xb9, 0xfd, 0xdf, 0x25, 0xff, 0x65, 0xab,
                                                                        0xfe, 0xff, 0xec, 0xd1, 0x38, 0x96, 0xf3, 0xeb, 0x6a, 0xb3, 0xed, 0xfe, 0x24, 0xa3, 0x91, 0x2d, 0x3e, 0x5b, 0x1d, 0x39,
                                                                        0x7a, 0xdd, 0x21, 0xf3, 0x89, 0x4d, 0xf7, 0xba, 0xc6, 0x55, 0xde, 0x72, 0xfc, 0x1f, 0xbf, 0xee, 0x2b, 0xff, 0xb3, 0xfd,
                                                                        0xe9, 0x72, 0x41, 0xfe, 0x57, 0x6d, 0xbb, 0x3b, 0xe7, 0x7f, 0xa6, 0xe7, 0x77, 0x56, 0xfe, 0xcb, 0xcb, 0xa7, 0x50, 0xcd,
                                                                        0xe6, 0x3f, 0xfe, 0x6c, 0x9c, 0xd1, 0x9c, 0xd7, 0x0b, 0xef, 0x6f, 0xad, 0x38, 0x07, 0xc6, 0xef, 0x37, 0x14, 0xf9, 0xbf,
                                                                        0x55, 0xfe, 0xaf, 0x6f, 0xff, 0x7b, 0x9f, 0xad, 0xf8, 0xde, 0xf9, 0x2f, 0x53, 0xd7, 0xf8, 0x56, 0xfc, 0xdd, 0x6e, 0xfd,
                                                                        0xff, 0xec, 0x73, 0xe7, 0xb9, 0xe7, 0xd3, 0x75, 0x7d, 0xdc, 0xd8, 0xf5, 0xa4, 0xd8, 0xd3, 0x0c, 0x62, 0x55, 0xb3, 0xd7,
                                                                        0x1c, 0x53, 0x25, 0xfc, 0x0c, 0xaf, 0x32, 0x7c, 0x06, 0x90, 0xff, 0x5f, 0x97, 0xac, 0x7b, 0x3a, 0x32, 0xac, 0xce, 0xd3,
                                                                        0xbd, 0xf2, 0x3f, 0xf7, 0x4d, 0x83, 0xfc, 0xa7, 0x0d, 0xd6, 0x0b, 0xda, 0x7f, 0x58, 0x7b, 0x97, 0x3d, 0xef, 0xf7, 0xc9,
                                                                        0xe8, 0xd3, 0x03, 0xef, 0xdb, 0x0f, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9e, 0x38, 0x57,
                                                                        0xe0, 0xf5, 0x2c, 0xcf, 0xe3, 0x2a, 0x18, 0x25, 0x58, 0x05, 0xbb, 0x74, 0x54, 0x4e, 0xae, 0xc1, 0xf7, 0x1b, 0x99, 0xa5,
                                                                        0xbc, 0x5b, 0x2d, 0x82, 0xd1, 0xfa, 0x88, 0x23, 0xb5, 0xb1, 0xcb, 0x70, 0x9d, 0xaf, 0x68, 0x15, 0x9b, 0x32, 0x59, 0x73,
                                                                        0x34, 0x3e, 0xff, 0x2e, 0x3a, 0x83, 0xfa, 0x68, 0x7f, 0x7e, 0xaa, 0xdf, 0xea, 0x97, 0xef, 0xbe, 0xd6, 0x7f, 0x86, 0xdf,
                                                                        0xb5, 0x76, 0xcd, 0xf7, 0x9b, 0xdd, 0x27, 0x3d, 0x5b, 0x28, 0x92, 0xff, 0x1d, 0xab, 0xee, 0x65, 0x55, 0xf9, 0xb8, 0x53,
                                                                        0xbd, 0xed, 0x91, 0x3a, 0xbc, 0xed, 0x7a, 0x1e, 0xf3, 0xf9, 0xef, 0xad, 0x29, 0x50, 0x27, 0xab, 0x7e, 0x8e, 0x9e, 0x2b,
                                                                        0x8e, 0xb7, 0xcb, 0xd1, 0xdc, 0xe4, 0xd7, 0xad, 0xdc, 0xa7, 0xfa, 0xf9, 0xc7, 0xff, 0xfe, 0xfe, 0x30, 0xff, 0x35, 0x3c,
                                                                        0x1b, 0xa7, 0xfd, 0x89, 0x32, 0xe7, 0x57, 0xbf, 0x47, 0xfe, 0xc7, 0xcf, 0x99, 0x77, 0xa8, 0xb7, 0x5d, 0x12, 0x7e, 0x9a,
                                                                        0x39, 0xf3, 0x3d, 0x5a, 0x53, 0x24, 0x9a, 0xff, 0x91, 0x34, 0xbd, 0x3e, 0xcb, 0x95, 0x8e, 0x0a, 0x6a, 0xa3, 0xf9, 0x6f,
                                                                        0xbd, 0x6b, 0x24, 0xff, 0x75, 0xb8, 0xf6, 0x4a, 0xff, 0xb6, 0x1c, 0x6b, 0x5d, 0xf6, 0xcc, 0x7f, 0xa4, 0xc7, 0x59, 0x4f,
                                                                        0xcc, 0xff, 0x5c, 0x8d, 0xaf, 0x72, 0x7a, 0xfe, 0x73, 0x9f, 0x53, 0xd1, 0x37, 0x92, 0xe9, 0x4d, 0x76, 0xff, 0xef, 0xd6,
                                                                        0x46, 0x5b, 0xbc, 0x2e, 0xff, 0xf5, 0x83, 0xf7, 0x5f, 0xd5, 0xfe, 0xc7, 0xeb, 0xab, 0xd6, 0x83, 0x4f, 0xf8, 0x84, 0xfc,
                                                                        0x97, 0x4d, 0xfa, 0xff, 0xf9, 0xcf, 0x52, 0xdb, 0x33, 0xff, 0xe3, 0x3d, 0xae, 0xf1, 0x76, 0x7d, 0xac, 0xaf, 0xd0, 0x1e,
                                                                        0x01, 0xd4, 0xc0, 0x19, 0xa0, 0x27, 0xff, 0xb1, 0xf6, 0x3f, 0x3a, 0xfe, 0x8f, 0x27, 0xa3, 0x3e, 0xb6, 0xfd, 0xcf, 0x1d,
                                                                        0xff, 0xaf, 0xaa, 0x45, 0x98, 0xfb, 0xbc, 0xad, 0xac, 0x5a, 0x9b, 0xb1, 0xbe, 0x56, 0xb4, 0xfd, 0x6f, 0xf5, 0x0e, 0x66,
                                                                        0xf2, 0x5f, 0x26, 0x93, 0xf8, 0xf1, 0xf5, 0xbf, 0x55, 0xed, 0xff, 0xf9, 0xd7, 0xff, 0x6b, 0x20, 0x21, 0xab, 0xaa, 0x6e,
                                                                        0xd6, 0xe1, 0x6b, 0x31, 0xb3, 0x55, 0xd5, 0xfa, 0xef, 0x34, 0xf4, 0x9c, 0x9b, 0x5f, 0xdf, 0xa5, 0xe8, 0xd9, 0x2a, 0x19,
                                                                        0xa3, 0xbe, 0x5d, 0xfb, 0xff, 0xd7, 0xb4, 0xff, 0x3d, 0xad, 0x7f, 0xa4, 0x0e, 0xd9, 0xba, 0xeb, 0x7f, 0xd1, 0xf1, 0xd3,
                                                                        0xdc, 0xfd, 0xbf, 0xeb, 0xeb, 0x08, 0x66, 0x5f, 0xf9, 0x39, 0xf3, 0xb5, 0xae, 0xfa, 0x44, 0x3b, 0xf6, 0xff, 0xe3, 0x63,
                                                                        0xab, 0x91, 0x51, 0x7d, 0xde, 0xfd, 0xbf, 0x98, 0x56, 0xfe, 0xd7, 0xbc, 0xeb, 0xba, 0x63, 0x4e, 0xfe, 0xf7, 0xdc, 0x07,
                                                                        0x7b, 0xe5, 0xbf, 0xf7, 0x29, 0xe6, 0x35, 0xfd, 0x4e, 0xfc, 0x6e, 0x7b, 0xb0, 0x9d, 0xff, 0x7b, 0x7d, 0xff, 0xe7, 0xfc,
                                                                        0x27, 0x8f, 0x5e, 0x9d, 0xff, 0xdd, 0xce, 0x00, 0x59, 0x4f, 0xbc, 0x2e, 0x49, 0x7b, 0x32, 0x72, 0x17, 0x6f, 0xf7, 0xf3,
                                                                        0xa5, 0xfc, 0xf3, 0xfc, 0xef, 0x6f, 0xd6, 0xc7, 0xf7, 0x9b, 0xae, 0xef, 0x5b, 0xcb, 0x3f, 0xbc, 0xaf, 0xf6, 0xf7, 0x7f,
                                                                        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xae, 0x9e, 0x0f, 0x58, 0x27, 0xe7, 0x0a, 0xc6, 0x2a,
                                                                        0x0d, 0x95, 0xe6, 0x8c, 0xd3, 0x1a, 0xfe, 0x9d, 0x91, 0x75, 0x89, 0xd7, 0xb0, 0x88, 0xd4, 0xe0, 0x2e, 0x8d, 0xba, 0x35,
                                                                        0x39, 0xdb, 0xe6, 0x9c, 0xf5, 0x6c, 0xd7, 0xda, 0x1b, 0x3b, 0x2e, 0x46, 0xb6, 0x54, 0xbb, 0x86, 0xca, 0x79, 0xdb, 0x21,
                                                                        0xba, 0xbf, 0x6b, 0x63, 0x76, 0x77, 0x6d, 0x54, 0xae, 0xc9, 0xa9, 0x07, 0x50, 0x1b, 0x75, 0x54, 0xe2, 0xf3, 0xd5, 0x46,
                                                                        0xcf, 0x00, 0xf5, 0x8f, 0xda, 0x4e, 0x35, 0xf4, 0x3b, 0xa3, 0x7b, 0x3d, 0xb6, 0xac, 0xa7, 0xaa, 0x63, 0x5e, 0xa5, 0xe8,
                                                                        0xc8, 0xb6, 0x59, 0xbf, 0x9e, 0xe3, 0xc7, 0x45, 0x4d, 0x7a, 0x87, 0xde, 0xba, 0x24, 0xfb, 0xef, 0xef, 0x76, 0x05, 0xd9,
                                                                        0xba, 0xac, 0xfd, 0xcf, 0xc8, 0xff, 0x58, 0x0d, 0xd6, 0x91, 0x3a, 0x63, 0x99, 0xf9, 0xdf, 0xab, 0x3f, 0x16, 0x7f, 0x1e,
                                                                        0x44, 0x56, 0xc5, 0xfd, 0x7b, 0xcc, 0xda, 0x8d, 0x3f, 0x99, 0xe0, 0x3e, 0xfb, 0x7b, 0xf5, 0xfa, 0xf5, 0x9c, 0x29, 0xe7,
                                                                        0xea, 0x42, 0x5c, 0x95, 0xff, 0xbc, 0xfe, 0x7f, 0xb4, 0x3f, 0x1d, 0x79, 0x26, 0xd2, 0x6c, 0x2d, 0xc5, 0x99, 0x27, 0x8b,
                                                                        0x9c, 0xbd, 0x2e, 0x73, 0xa3, 0x82, 0x9e, 0x31, 0xeb, 0x0e, 0xdb, 0x61, 0x66, 0x1b, 0x95, 0xe0, 0x93, 0x17, 0xb2, 0xf2,
                                                                        0x9f, 0x51, 0xcf, 0x74, 0x7c, 0xfc, 0xd7, 0xde, 0x56, 0xb9, 0xe7, 0xc5, 0xd8, 0xeb, 0xed, 0xba, 0xac, 0x4e, 0x8c, 0x63,
                                                                        0xae, 0x7d, 0x92, 0x51, 0x4e, 0xfe, 0xfb, 0x7b, 0xb5, 0xbb, 0xef, 0xd3, 0xd2, 0x31, 0x4e, 0xde, 0x3f, 0xff, 0xa3, 0x9f,
                                                                        0x25, 0xb3, 0x8f, 0x3b, 0x5b, 0x5d, 0xfa, 0x9a, 0x65, 0xf3, 0x4f, 0x2a, 0xd9, 0xfd, 0xd8, 0xbe, 0x3a, 0xff, 0x6b, 0x9e,
                                                                        0x06, 0x93, 0xbd, 0x8d, 0x5a, 0xa3, 0x86, 0xac, 0xf6, 0xbf, 0x35, 0x02, 0xa9, 0x5b, 0x8c, 0x0b, 0xfb, 0xb2, 0x3d, 0x7e,
                                                                        0xfd, 0x7f, 0xee, 0x58, 0x59, 0xb1, 0x6c, 0xfe, 0xb8, 0xdd, 0x37, 0xe3, 0xbb, 0xe4, 0xff, 0x0e, 0xe7, 0xc8, 0x78, 0xab,
                                                                        0x9d, 0xd1, 0xf7, 0x3d, 0xbf, 0xfd, 0xcf, 0xc8, 0x7f, 0xfe, 0x15, 0xd0, 0x3b, 0x2e, 0x5b, 0x9f, 0xd5, 0xd9, 0x6b, 0x70,
                                                                        0xf2, 0x2f, 0xff, 0xf1, 0xbe, 0x4a, 0x4d, 0xaf, 0x70, 0xb9, 0xe2, 0xe9, 0x60, 0x57, 0x8d, 0xff, 0x73, 0xaf, 0x43, 0xdd,
                                                                        0xb5, 0xff, 0x7f, 0xf7, 0x7d, 0x3a, 0xd3, 0x6b, 0xa7, 0xbc, 0x55, 0xdf, 0x60, 0xf6, 0x6c, 0xff, 0xb4, 0xfc, 0x3f, 0x7b,
                                                                        0x9f, 0x4a, 0xbd, 0xfc, 0xe7, 0x9e, 0x01, 0xd6, 0x65, 0x7c, 0x24, 0xbb, 0xef, 0x97, 0xff, 0xbb, 0x3c, 0x35, 0x48, 0xfe,
                                                                        0x9f, 0x31, 0xe6, 0x3b, 0xf7, 0x7b, 0x0e, 0x39, 0xdf, 0xff, 0x2b, 0x27, 0x3e, 0x01, 0xef, 0xec, 0xfb, 0xff, 0x00, 0x00,
                                                                        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0x33, 0x7e, 0x33, 0x2b, 0x3d, 0x1f, 0xfd, 0xe5, 0xa7, 0xfa,
                                                                        0xad, 0x7e, 0xf9, 0xee, 0x6b, 0xfd, 0xe7, 0xb0, 0xce, 0xc9, 0x19, 0x6b, 0xa1, 0x2e, 0xf7, 0xda, 0xba, 0xdc, 0xc7, 0x7b,
                                                                        0xfb, 0x2e, 0x55, 0xb9, 0x7b, 0x8f, 0xd9, 0x3a, 0xb8, 0x85, 0x57, 0xa6, 0x2f, 0xab, 0x9e, 0x43, 0x74, 0xee, 0xe1, 0xab,
                                                                        0xd7, 0xfc, 0x54, 0x3f, 0xff, 0xf8, 0xdf, 0xdf, 0x1f, 0x6e, 0xcb, 0xbe, 0x7a, 0x60, 0x79, 0x6b, 0xa1, 0x2e, 0xf7, 0xca,
                                                                        0xba, 0xdc, 0x7d, 0x7b, 0x7b, 0xf7, 0xaa, 0xdc, 0xfd, 0x6b, 0x51, 0x37, 0x49, 0xdf, 0xb5, 0xb3, 0xe4, 0xe2, 0xdb, 0x72,
                                                                        0xaf, 0x1a, 0xce, 0x35, 0x5c, 0x5b, 0x73, 0xae, 0x2e, 0xef, 0xf9, 0xeb, 0xb2, 0xaa, 0x87, 0xd9, 0x4a, 0xce, 0x6e, 0x47,
                                                                        0x74, 0x6c, 0x2d, 0xae, 0xd9, 0x9b, 0xfd, 0xef, 0xb8, 0xd3, 0xec, 0xe7, 0x99, 0xfc, 0xef, 0x54, 0xa7, 0xb9, 0xbd, 0xbd,
                                                                        0xe3, 0xcf, 0x51, 0x7a, 0x4e, 0x5d, 0xee, 0xd6, 0xde, 0x2e, 0x27, 0xcf, 0xbc, 0x8d, 0x6d, 0xa1, 0xfe, 0x3e, 0xeb, 0x1e,
                                                                        0x75, 0x96, 0xee, 0x9e, 0xff, 0x9d, 0xb6, 0x63, 0x0d, 0xd6, 0xe5, 0xdf, 0xab, 0xf6, 0xf6, 0xae, 0xf9, 0xbf, 0x47, 0xa5,
                                                                        0x95, 0x9e, 0xfc, 0xef, 0x76, 0xdc, 0x3e, 0xb1, 0xfd, 0x2f, 0x1d, 0xd5, 0xee, 0x33, 0x97, 0xe5, 0xd4, 0x8c, 0x7f, 0xe7,
                                                                        0xba, 0xbc, 0xef, 0x93, 0xff, 0x22, 0xff, 0xa7, 0xf4, 0xff, 0xcf, 0x5b, 0x36, 0xdf, 0x37, 0x58, 0x71, 0xfd, 0xff, 0x5e,
                                                                        0x75, 0x79, 0xdf, 0xa9, 0xfd, 0xdf, 0xa7, 0xce, 0xe2, 0x33, 0xf3, 0xbf, 0x63, 0x7b, 0xaa, 0x2e, 0xa7, 0xfc, 0xd7, 0xcd,
                                                                        0xd2, 0xb7, 0xcb, 0x11, 0x15, 0x3f, 0x22, 0x76, 0xaa, 0x57, 0x9d, 0x7d, 0x6d, 0xb0, 0xff, 0x0e, 0xfb, 0x13, 0xea, 0x72,
                                                                        0xde, 0x27, 0xff, 0x33, 0xd7, 0xff, 0xcf, 0x4f, 0x5f, 0x19, 0x7a, 0x0e, 0xf8, 0x15, 0x67, 0xa0, 0xd8, 0xfd, 0xff, 0xb3,
                                                                        0xaf, 0x8b, 0x67, 0x3d, 0x97, 0x28, 0xf7, 0x3b, 0x59, 0xcf, 0xa9, 0xcb, 0x79, 0x9f, 0xbb, 0x3d, 0x33, 0xf7, 0xff, 0xfb,
                                                                        0xee, 0x2c, 0x96, 0xe1, 0x1c, 0x67, 0x3c, 0xeb, 0xbf, 0x5c, 0x54, 0xc5, 0x38, 0xfa, 0xfd, 0x9f, 0x3b, 0x7d, 0xa3, 0x52,
                                                                        0x7d, 0xd7, 0xd5, 0xc9, 0xb1, 0x16, 0xeb, 0x8f, 0xd6, 0x35, 0x55, 0x8c, 0x5f, 0xe7, 0xbf, 0xf5, 0x5d, 0x4a, 0x9e, 0x94,
                                                                        0xff, 0x27, 0xec, 0x6d, 0xc7, 0x2c, 0xac, 0xf4, 0x97, 0x6d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                                        0xd0, 0x3d, 0x43, 0xf3, 0xf8, 0xbb, 0xcd, 0x3b, 0xd7, 0x20, 0x05, 0x66, 0xe7, 0xe3, 0x3c, 0x63, 0x3e, 0x1e, 0x90, 0x3d,
                                                                        0xb7, 0x71, 0xaf, 0x7a, 0xdc, 0x40, 0xee, 0xfc, 0x7f, 0xf9, 0x07, 0xf9, 0x97, 0x7f, 0x90, 0x7f, 0xf9, 0x07, 0xf9, 0xff,
                                                                        0xf9, 0x97, 0x55, 0xfe, 0xe1, 0xe6, 0xf9, 0xaf, 0x4b, 0x6a, 0x9b, 0x03, 0x77, 0x39, 0x03, 0x44, 0xf2, 0x5f, 0xf4, 0xff,
                                                                        0xe1, 0xb1, 0xdf, 0x01, 0x30, 0xfe, 0x07, 0xe3, 0x7f, 0xf9, 0x87, 0x77, 0xcc, 0x7f, 0xeb, 0xfb, 0xbf, 0x46, 0xff, 0xf0,
                                                                        0x8c, 0xf1, 0xbf, 0x2d, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                                        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                                        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                                        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                                        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                                        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                                        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbc, 0xf2, 0xff, 0x3f, 0xdb, 0x01, 0xe4, 0x1f, 0x78, 0xbb, 0xfc, 0xff, 0x0b};

// Font glyphs rectangles data (on atlas)
static const Rectangle candyFontRecs[189] = {
    {4, 4, 3, 15},
    {15, 4, 2, 9},
    {25, 4, 3, 2},
    {36, 4, 8, 9},
    {52, 4, 6, 11},
    {66, 4, 7, 9},
    {81, 4, 7, 9},
    {96, 4, 1, 2},
    {105, 4, 3, 11},
    {116, 4, 3, 11},
    {127, 4, 7, 7},
    {142, 4, 6, 5},
    {156, 4, 2, 3},
    {166, 4, 5, 1},
    {179, 4, 2, 2},
    {189, 4, 5, 10},
    {202, 4, 6, 9},
    {216, 4, 4, 9},
    {228, 4, 6, 9},
    {242, 4, 6, 9},
    {256, 4, 7, 9},
    {271, 4, 6, 9},
    {285, 4, 6, 9},
    {299, 4, 6, 9},
    {313, 4, 6, 9},
    {327, 4, 6, 9},
    {341, 4, 2, 6},
    {351, 4, 2, 7},
    {361, 4, 4, 6},
    {373, 4, 5, 3},
    {386, 4, 4, 6},
    {398, 4, 6, 9},
    {412, 4, 8, 7},
    {428, 4, 6, 9},
    {442, 4, 6, 9},
    {456, 4, 6, 9},
    {470, 4, 6, 9},
    {484, 4, 6, 9},
    {4, 27, 6, 9},
    {18, 27, 6, 9},
    {32, 27, 6, 9},
    {46, 27, 2, 9},
    {56, 27, 6, 9},
    {70, 27, 6, 9},
    {84, 27, 6, 9},
    {98, 27, 8, 9},
    {114, 27, 6, 9},
    {128, 27, 6, 9},
    {142, 27, 6, 9},
    {156, 27, 6, 9},
    {170, 27, 6, 9},
    {184, 27, 6, 9},
    {198, 27, 6, 9},
    {212, 27, 6, 9},
    {226, 27, 6, 9},
    {240, 27, 8, 9},
    {256, 27, 6, 9},
    {270, 27, 6, 9},
    {284, 27, 6, 9},
    {298, 27, 3, 11},
    {309, 27, 5, 10},
    {322, 27, 3, 11},
    {333, 27, 6, 4},
    {347, 27, 6, 1},
    {361, 27, 3, 2},
    {372, 27, 6, 7},
    {386, 27, 6, 10},
    {400, 27, 6, 7},
    {414, 27, 6, 10},
    {428, 27, 6, 7},
    {442, 27, 5, 10},
    {455, 27, 7, 10},
    {470, 27, 6, 10},
    {484, 27, 2, 10},
    {494, 27, 2, 12},
    {4, 50, 6, 10},
    {18, 50, 3, 10},
    {29, 50, 8, 7},
    {45, 50, 6, 7},
    {59, 50, 6, 7},
    {73, 50, 6, 10},
    {87, 50, 6, 10},
    {101, 50, 6, 7},
    {115, 50, 6, 7},
    {129, 50, 3, 10},
    {140, 50, 6, 7},
    {154, 50, 6, 7},
    {168, 50, 8, 7},
    {184, 50, 6, 7},
    {198, 50, 6, 10},
    {212, 50, 6, 7},
    {226, 50, 4, 11},
    {238, 50, 1, 11},
    {247, 50, 4, 11},
    {259, 50, 6, 2},
    {273, 50, 2, 10},
    {283, 50, 6, 11},
    {297, 50, 8, 9},
    {313, 50, 7, 9},
    {328, 50, 6, 9},
    {342, 50, 0, 0},
    {350, 50, 6, 11},
    {364, 50, 0, 0},
    {372, 50, 8, 8},
    {388, 50, 5, 7},
    {401, 50, 7, 6},
    {416, 50, 7, 12},
    {431, 50, 8, 8},
    {447, 50, 6, 1},
    {461, 50, 4, 5},
    {473, 50, 6, 7},
    {487, 50, 3, 5},
    {498, 50, 3, 5},
    {4, 73, 0, 0},
    {12, 73, 6, 9},
    {26, 73, 6, 9},
    {40, 73, 4, 4},
    {52, 73, 0, 0},
    {60, 73, 2, 5},
    {70, 73, 4, 7},
    {82, 73, 7, 6},
    {97, 73, 10, 9},
    {115, 73, 10, 7},
    {133, 73, 0, 0},
    {141, 73, 6, 9},
    {155, 73, 6, 12},
    {169, 73, 6, 12},
    {183, 73, 6, 12},
    {197, 73, 6, 12},
    {211, 73, 6, 11},
    {225, 73, 6, 12},
    {239, 73, 10, 9},
    {257, 73, 6, 12},
    {271, 73, 6, 12},
    {285, 73, 6, 12},
    {299, 73, 6, 12},
    {313, 73, 6, 11},
    {327, 73, 3, 12},
    {338, 73, 3, 12},
    {349, 73, 4, 12},
    {361, 73, 4, 11},
    {373, 73, 8, 9},
    {389, 73, 6, 12},
    {403, 73, 6, 12},
    {417, 73, 6, 12},
    {431, 73, 6, 12},
    {445, 73, 6, 12},
    {459, 73, 6, 11},
    {473, 73, 5, 5},
    {486, 73, 9, 10},
    {4, 96, 6, 12},
    {18, 96, 6, 12},
    {32, 96, 6, 12},
    {46, 96, 6, 11},
    {60, 96, 6, 12},
    {74, 96, 7, 12},
    {89, 96, 6, 10},
    {103, 96, 6, 10},
    {117, 96, 6, 10},
    {131, 96, 6, 10},
    {145, 96, 6, 10},
    {159, 96, 6, 9},
    {173, 96, 6, 11},
    {187, 96, 10, 7},
    {205, 96, 6, 10},
    {219, 96, 6, 10},
    {233, 96, 6, 10},
    {247, 96, 6, 10},
    {261, 96, 6, 9},
    {275, 96, 3, 10},
    {286, 96, 3, 10},
    {297, 96, 4, 10},
    {309, 96, 4, 9},
    {321, 96, 7, 12},
    {336, 96, 6, 13},
    {350, 96, 6, 10},
    {364, 96, 6, 10},
    {378, 96, 6, 10},
    {392, 96, 6, 10},
    {406, 96, 6, 9},
    {420, 96, 7, 12},
    {435, 96, 8, 8},
    {451, 96, 6, 10},
    {465, 96, 6, 10},
    {479, 96, 6, 10},
    {493, 96, 6, 9},
    {4, 119, 6, 13},
    {18, 119, 7, 12},
    {33, 119, 6, 12},
};

// Font glyphs info data
// NOTE: No glyphs.image data provided
static const GlyphInfo candyFontGlyphs[189] = {
    {32, 0, 12, 3, {0}},
    {33, 0, 3, 3, {0}},
    {34, 0, 2, 4, {0}},
    {35, 0, 3, 9, {0}},
    {36, 0, 2, 7, {0}},
    {37, 0, 3, 8, {0}},
    {38, 0, 3, 8, {0}},
    {39, 0, 2, 2, {0}},
    {40, 1, 2, 5, {0}},
    {41, 1, 2, 5, {0}},
    {42, 0, 4, 8, {0}},
    {43, 0, 6, 7, {0}},
    {44, 0, 10, 3, {0}},
    {45, 0, 7, 6, {0}},
    {46, 0, 10, 3, {0}},
    {47, 1, 3, 7, {0}},
    {48, 0, 3, 7, {0}},
    {49, 0, 3, 5, {0}},
    {50, 0, 3, 7, {0}},
    {51, 0, 3, 7, {0}},
    {52, 0, 3, 8, {0}},
    {53, 0, 3, 7, {0}},
    {54, 0, 3, 7, {0}},
    {55, 0, 3, 7, {0}},
    {56, 0, 3, 7, {0}},
    {57, 0, 3, 7, {0}},
    {58, 0, 6, 3, {0}},
    {59, 0, 6, 3, {0}},
    {60, 1, 5, 6, {0}},
    {61, 1, 7, 7, {0}},
    {62, 1, 5, 6, {0}},
    {63, 0, 3, 7, {0}},
    {64, 0, 4, 9, {0}},
    {65, 0, 3, 7, {0}},
    {66, 0, 3, 7, {0}},
    {67, 0, 3, 7, {0}},
    {68, 0, 3, 7, {0}},
    {69, 0, 3, 7, {0}},
    {70, 0, 3, 7, {0}},
    {71, 0, 3, 7, {0}},
    {72, 0, 3, 7, {0}},
    {73, 0, 3, 3, {0}},
    {74, 0, 3, 7, {0}},
    {75, 0, 3, 7, {0}},
    {76, 0, 3, 7, {0}},
    {77, 0, 3, 9, {0}},
    {78, 0, 3, 7, {0}},
    {79, 0, 3, 7, {0}},
    {80, 0, 3, 7, {0}},
    {81, 0, 3, 7, {0}},
    {82, 0, 3, 7, {0}},
    {83, 0, 3, 7, {0}},
    {84, 0, 3, 7, {0}},
    {85, 0, 3, 7, {0}},
    {86, 0, 3, 7, {0}},
    {87, 0, 3, 9, {0}},
    {88, 0, 3, 7, {0}},
    {89, 0, 3, 7, {0}},
    {90, 0, 3, 7, {0}},
    {91, 1, 2, 5, {0}},
    {92, 1, 3, 7, {0}},
    {93, 1, 2, 5, {0}},
    {94, 0, 3, 7, {0}},
    {95, 0, 11, 7, {0}},
    {96, 0, 0, 4, {0}},
    {97, 0, 5, 7, {0}},
    {98, 0, 2, 7, {0}},
    {99, 0, 5, 7, {0}},
    {100, 0, 2, 7, {0}},
    {101, 0, 5, 7, {0}},
    {102, 0, 2, 6, {0}},
    {103, 0, 5, 7, {0}},
    {104, 0, 2, 7, {0}},
    {105, 0, 2, 3, {0}},
    {106, 0, 2, 3, {0}},
    {107, 0, 2, 7, {0}},
    {108, 0, 2, 4, {0}},
    {109, 0, 5, 9, {0}},
    {110, 0, 5, 7, {0}},
    {111, 0, 5, 7, {0}},
    {112, 0, 5, 7, {0}},
    {113, 0, 5, 7, {0}},
    {114, 0, 5, 7, {0}},
    {115, 0, 5, 7, {0}},
    {116, 0, 2, 4, {0}},
    {117, 0, 5, 7, {0}},
    {118, 0, 5, 7, {0}},
    {119, 0, 5, 9, {0}},
    {120, 0, 5, 7, {0}},
    {121, 0, 5, 7, {0}},
    {122, 0, 5, 7, {0}},
    {123, 1, 2, 6, {0}},
    {124, 1, 2, 3, {0}},
    {125, 1, 2, 6, {0}},
    {126, 0, 0, 7, {0}},
    {161, 0, 3, 3, {0}},
    {162, 0, 2, 7, {0}},
    {163, 0, 3, 9, {0}},
    {8364, 0, 3, 8, {0}},
    {165, 0, 3, 7, {0}},
    {352, 0, 12, 1, {0}},
    {167, 0, 2, 7, {0}},
    {353, 0, 12, 1, {0}},
    {169, 0, 0, 9, {0}},
    {170, 0, 0, 6, {0}},
    {171, 1, 5, 9, {0}},
    {172, 0, 0, 7, {0}},
    {174, 0, 0, 9, {0}},
    {175, 0, 0, 7, {0}},
    {176, 0, 0, 5, {0}},
    {177, 0, 4, 7, {0}},
    {178, 0, 0, 4, {0}},
    {179, 0, 0, 4, {0}},
    {381, 0, 12, 1, {0}},
    {181, 0, 5, 7, {0}},
    {182, 0, 3, 7, {0}},
    {183, 0, 6, 5, {0}},
    {382, 0, 12, 1, {0}},
    {185, 0, 0, 3, {0}},
    {186, 0, 0, 5, {0}},
    {187, 1, 5, 9, {0}},
    {338, 0, 3, 11, {0}},
    {339, 0, 5, 11, {0}},
    {376, 0, 12, 1, {0}},
    {191, 0, 4, 7, {0}},
    {192, 0, 0, 7, {0}},
    {193, 0, 0, 7, {0}},
    {194, 0, 0, 7, {0}},
    {195, 0, 0, 7, {0}},
    {196, 0, 1, 7, {0}},
    {197, 0, 0, 7, {0}},
    {198, 0, 3, 11, {0}},
    {199, 0, 3, 7, {0}},
    {200, 0, 0, 7, {0}},
    {201, 0, 0, 7, {0}},
    {202, 0, 0, 7, {0}},
    {203, 0, 1, 7, {0}},
    {204, -1, 0, 3, {0}},
    {205, 0, 0, 3, {0}},
    {206, -1, 0, 3, {0}},
    {207, -1, 1, 3, {0}},
    {208, 0, 3, 9, {0}},
    {209, 0, 0, 7, {0}},
    {210, 0, 0, 7, {0}},
    {211, 0, 0, 7, {0}},
    {212, 0, 0, 7, {0}},
    {213, 0, 0, 7, {0}},
    {214, 0, 1, 7, {0}},
    {215, 0, 7, 6, {0}},
    {216, 0, 3, 10, {0}},
    {217, 0, 0, 7, {0}},
    {218, 0, 0, 7, {0}},
    {219, 0, 0, 7, {0}},
    {220, 0, 1, 7, {0}},
    {221, 0, 0, 7, {0}},
    {222, 0, 0, 7, {0}},
    {223, 0, 3, 7, {0}},
    {224, 0, 2, 7, {0}},
    {225, 0, 2, 7, {0}},
    {226, 0, 2, 7, {0}},
    {227, 0, 2, 7, {0}},
    {228, 0, 3, 7, {0}},
    {229, 0, 1, 7, {0}},
    {230, 0, 5, 11, {0}},
    {231, 0, 5, 7, {0}},
    {232, 0, 2, 7, {0}},
    {233, 0, 2, 7, {0}},
    {234, 0, 2, 7, {0}},
    {235, 0, 3, 7, {0}},
    {236, 0, 2, 4, {0}},
    {237, 0, 2, 4, {0}},
    {238, 0, 2, 4, {0}},
    {239, 0, 3, 4, {0}},
    {240, 0, 0, 7, {0}},
    {241, 0, 2, 7, {0}},
    {242, 0, 2, 7, {0}},
    {243, 0, 2, 7, {0}},
    {244, 0, 2, 7, {0}},
    {245, 0, 2, 7, {0}},
    {246, 0, 3, 7, {0}},
    {247, 0, 0, 7, {0}},
    {248, 0, 5, 9, {0}},
    {249, 0, 2, 7, {0}},
    {250, 0, 2, 7, {0}},
    {251, 0, 2, 7, {0}},
    {252, 0, 3, 7, {0}},
    {253, 0, 2, 7, {0}},
    {254, 0, 0, 7, {0}},
    {255, 0, 3, 7, {0}},
};

// Style loading function: Candy
static void GuiLoadStyleCandy(void)
{
    // Load style properties provided
    // NOTE: Default properties are propagated
    for (int i = 0; i < CANDY_STYLE_PROPS_COUNT; i++)
    {
        GuiSetStyle(candyStyleProps[i].controlId, candyStyleProps[i].propertyId, candyStyleProps[i].propertyValue);
    }

    // Custom font loading
    // NOTE: Compressed font image data (DEFLATE), it requires DecompressData() function
    int candyFontDataSize = 0;
    unsigned char *data = DecompressData(candyFontData, CANDY_STYLE_FONT_ATLAS_COMP_SIZE, &candyFontDataSize);
    Image imFont = {data, 512, 256, 1, 2};

    Font font = {0};
    font.baseSize = 15;
    font.glyphCount = 189;

    // Load texture from image
    font.texture = LoadTextureFromImage(imFont);
    UnloadImage(imFont); // Uncompressed image data can be unloaded from memory

    // Copy char recs data from global fontRecs
    // NOTE: Required to avoid issues if trying to free font
    font.recs = (Rectangle *)RAYGUI_MALLOC(font.glyphCount * sizeof(Rectangle));
    memcpy(font.recs, candyFontRecs, font.glyphCount * sizeof(Rectangle));

    // Copy font char info data from global fontChars
    // NOTE: Required to avoid issues if trying to free font
    font.glyphs = (GlyphInfo *)RAYGUI_MALLOC(font.glyphCount * sizeof(GlyphInfo));
    memcpy(font.glyphs, candyFontGlyphs, font.glyphCount * sizeof(GlyphInfo));

    GuiSetFont(font);

    // Setup a white rectangle on the font to be used on shapes drawing,
    // it makes possible to draw shapes and text (full UI) in a single draw call
    Rectangle fontWhiteRec = {510, 254, 1, 1};
    SetShapesTexture(font.texture, fontWhiteRec);

    //-----------------------------------------------------------------

    // TODO: Custom user style setup: Set specific properties here (if required)
    // i.e. Controls specific BORDER_WIDTH, TEXT_PADDING, TEXT_ALIGNMENT
}