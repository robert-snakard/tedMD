#   include "ucd.h"
#   include "ucdIntern.h"
static const unsigned short    UCD_MIRROR_0020_002f[16]= {0x20,0x21,0x22,0x23,0x24,0x25,0x26,0x27,0x29,0x28,0x2a,0x2b,0x2c,0x2d,0x2e,0x2f,};
static const unsigned short    UCD_MIRROR_0030_003f[16]= {0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x3a,0x3b,0x3e,0x3d,0x3c,0x3f,};
static const unsigned short    UCD_MIRROR_0050_005f[16]= {0x50,0x51,0x52,0x53,0x54,0x55,0x56,0x57,0x58,0x59,0x5a,0x5d,0x5c,0x5b,0x5e,0x5f,};
static const unsigned short    UCD_MIRROR_0070_007f[16]= {0x70,0x71,0x72,0x73,0x74,0x75,0x76,0x77,0x78,0x79,0x7a,0x7d,0x7c,0x7b,0x7e,0x7f,};
static const unsigned short    UCD_MIRROR_00a0_00af[16]= {0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xbb,0xac,0xad,0xae,0xaf,};
static const unsigned short    UCD_MIRROR_00b0_00bf[16]= {0xb0,0xb1,0xb2,0xb3,0xb4,0xb5,0xb6,0xb7,0xb8,0xb9,0xba,0xab,0xbc,0xbd,0xbe,0xbf,};
static const unsigned short * const UCD_MIRROR_0000_00ff[16]= {
	(const unsigned short *)0,
	(const unsigned short *)0,
	UCD_MIRROR_0020_002f,
	UCD_MIRROR_0030_003f,
	(const unsigned short *)0,
	UCD_MIRROR_0050_005f,
	(const unsigned short *)0,
	UCD_MIRROR_0070_007f,
	(const unsigned short *)0,
	(const unsigned short *)0,
	UCD_MIRROR_00a0_00af,
	UCD_MIRROR_00b0_00bf,
};
static const unsigned short    UCD_MIRROR_0f30_0f3f[16]= {0xf30,0xf31,0xf32,0xf33,0xf34,0xf35,0xf36,0xf37,0xf38,0xf39,0xf3b,0xf3a,0xf3d,0xf3c,0xf3e,0xf3f,};
static const unsigned short * const UCD_MIRROR_0f00_0fff[16]= {
	(const unsigned short *)0,
	(const unsigned short *)0,
	(const unsigned short *)0,
	UCD_MIRROR_0f30_0f3f,
};
static const unsigned short * const * const UCD_MIRROR_0000_0fff[16]= {
	UCD_MIRROR_0000_00ff,
	(const unsigned short * const *)0,
	(const unsigned short * const *)0,
	(const unsigned short * const *)0,
	(const unsigned short * const *)0,
	(const unsigned short * const *)0,
	(const unsigned short * const *)0,
	(const unsigned short * const *)0,
	(const unsigned short * const *)0,
	(const unsigned short * const *)0,
	(const unsigned short * const *)0,
	(const unsigned short * const *)0,
	(const unsigned short * const *)0,
	(const unsigned short * const *)0,
	(const unsigned short * const *)0,
	UCD_MIRROR_0f00_0fff,
};
static const unsigned short    UCD_MIRROR_1690_169f[16]= {0x1690,0x1691,0x1692,0x1693,0x1694,0x1695,0x1696,0x1697,0x1698,0x1699,0x169a,0x169c,0x169b,0x169d,0x169e,0x169f,};
static const unsigned short * const UCD_MIRROR_1600_16ff[16]= {
	(const unsigned short *)0,
	(const unsigned short *)0,
	(const unsigned short *)0,
	(const unsigned short *)0,
	(const unsigned short *)0,
	(const unsigned short *)0,
	(const unsigned short *)0,
	(const unsigned short *)0,
	(const unsigned short *)0,
	UCD_MIRROR_1690_169f,
};
static const unsigned short * const * const UCD_MIRROR_1000_1fff[16]= {
	(const unsigned short * const *)0,
	(const unsigned short * const *)0,
	(const unsigned short * const *)0,
	(const unsigned short * const *)0,
	(const unsigned short * const *)0,
	(const unsigned short * const *)0,
	UCD_MIRROR_1600_16ff,
};
static const unsigned short    UCD_MIRROR_2030_203f[16]= {0x2030,0x2031,0x2032,0x2033,0x2034,0x2035,0x2036,0x2037,0x2038,0x203a,0x2039,0x203b,0x203c,0x203d,0x203e,0x203f,};
static const unsigned short    UCD_MIRROR_2040_204f[16]= {0x2040,0x2041,0x2042,0x2043,0x2044,0x2046,0x2045,0x2047,0x2048,0x2049,0x204a,0x204b,0x204c,0x204d,0x204e,0x204f,};
static const unsigned short    UCD_MIRROR_2070_207f[16]= {0x2070,0x2071,0x2072,0x2073,0x2074,0x2075,0x2076,0x2077,0x2078,0x2079,0x207a,0x207b,0x207c,0x207e,0x207d,0x207f,};
static const unsigned short    UCD_MIRROR_2080_208f[16]= {0x2080,0x2081,0x2082,0x2083,0x2084,0x2085,0x2086,0x2087,0x2088,0x2089,0x208a,0x208b,0x208c,0x208e,0x208d,0x208f,};
static const unsigned short * const UCD_MIRROR_2000_20ff[16]= {
	(const unsigned short *)0,
	(const unsigned short *)0,
	(const unsigned short *)0,
	UCD_MIRROR_2030_203f,
	UCD_MIRROR_2040_204f,
	(const unsigned short *)0,
	(const unsigned short *)0,
	UCD_MIRROR_2070_207f,
	UCD_MIRROR_2080_208f,
};
static const unsigned short    UCD_MIRROR_2200_220f[16]= {0x2200,0x2201,0x2202,0x2203,0x2204,0x2205,0x2206,0x2207,0x220b,0x220c,0x220d,0x2208,0x2209,0x220a,0x220e,0x220f,};
static const unsigned short    UCD_MIRROR_2210_221f[16]= {0x2210,0x2211,0x2212,0x2213,0x2214,0x29f5,0x2216,0x2217,0x2218,0x2219,0x221a,0x221b,0x221c,0x221d,0x221e,0x221f,};
static const unsigned short    UCD_MIRROR_2230_223f[16]= {0x2230,0x2231,0x2232,0x2233,0x2234,0x2235,0x2236,0x2237,0x2238,0x2239,0x223a,0x223b,0x223d,0x223c,0x223e,0x223f,};
static const unsigned short    UCD_MIRROR_2240_224f[16]= {0x2240,0x2241,0x2242,0x22cd,0x2244,0x2245,0x2246,0x2247,0x2248,0x2249,0x224a,0x224b,0x224c,0x224d,0x224e,0x224f,};
static const unsigned short    UCD_MIRROR_2250_225f[16]= {0x2250,0x2251,0x2253,0x2252,0x2255,0x2254,0x2256,0x2257,0x2258,0x2259,0x225a,0x225b,0x225c,0x225d,0x225e,0x225f,};
static const unsigned short    UCD_MIRROR_2260_226f[16]= {0x2260,0x2261,0x2262,0x2263,0x2265,0x2264,0x2267,0x2266,0x2269,0x2268,0x226b,0x226a,0x226c,0x226d,0x226f,0x226e,};
static const unsigned short    UCD_MIRROR_2270_227f[16]= {0x2271,0x2270,0x2273,0x2272,0x2275,0x2274,0x2277,0x2276,0x2279,0x2278,0x227b,0x227a,0x227d,0x227c,0x227f,0x227e,};
static const unsigned short    UCD_MIRROR_2280_228f[16]= {0x2281,0x2280,0x2283,0x2282,0x2285,0x2284,0x2287,0x2286,0x2289,0x2288,0x228b,0x228a,0x228c,0x228d,0x228e,0x2290,};
static const unsigned short    UCD_MIRROR_2290_229f[16]= {0x228f,0x2292,0x2291,0x2293,0x2294,0x2295,0x2296,0x2297,0x29b8,0x2299,0x229a,0x229b,0x229c,0x229d,0x229e,0x229f,};
static const unsigned short    UCD_MIRROR_22a0_22af[16]= {0x22a0,0x22a1,0x22a3,0x22a2,0x22a4,0x22a5,0x2ade,0x22a7,0x2ae4,0x2ae3,0x22aa,0x2ae5,0x22ac,0x22ad,0x22ae,0x22af,};
static const unsigned short    UCD_MIRROR_22b0_22bf[16]= {0x22b1,0x22b0,0x22b3,0x22b2,0x22b5,0x22b4,0x22b7,0x22b6,0x22b8,0x22b9,0x22ba,0x22bb,0x22bc,0x22bd,0x22be,0x22bf,};
static const unsigned short    UCD_MIRROR_22c0_22cf[16]= {0x22c0,0x22c1,0x22c2,0x22c3,0x22c4,0x22c5,0x22c6,0x22c7,0x22c8,0x22ca,0x22c9,0x22cc,0x22cb,0x2243,0x22ce,0x22cf,};
static const unsigned short    UCD_MIRROR_22d0_22df[16]= {0x22d1,0x22d0,0x22d2,0x22d3,0x22d4,0x22d5,0x22d7,0x22d6,0x22d9,0x22d8,0x22db,0x22da,0x22dd,0x22dc,0x22df,0x22de,};
static const unsigned short    UCD_MIRROR_22e0_22ef[16]= {0x22e1,0x22e0,0x22e3,0x22e2,0x22e5,0x22e4,0x22e7,0x22e6,0x22e9,0x22e8,0x22eb,0x22ea,0x22ed,0x22ec,0x22ee,0x22ef,};
static const unsigned short    UCD_MIRROR_22f0_22ff[16]= {0x22f1,0x22f0,0x22fa,0x22fb,0x22fc,0x22f5,0x22fd,0x22fe,0x22f8,0x22f9,0x22f2,0x22f3,0x22f4,0x22f6,0x22f7,0x22ff,};
static const unsigned short * const UCD_MIRROR_2200_22ff[16]= {
	UCD_MIRROR_2200_220f,
	UCD_MIRROR_2210_221f,
	(const unsigned short *)0,
	UCD_MIRROR_2230_223f,
	UCD_MIRROR_2240_224f,
	UCD_MIRROR_2250_225f,
	UCD_MIRROR_2260_226f,
	UCD_MIRROR_2270_227f,
	UCD_MIRROR_2280_228f,
	UCD_MIRROR_2290_229f,
	UCD_MIRROR_22a0_22af,
	UCD_MIRROR_22b0_22bf,
	UCD_MIRROR_22c0_22cf,
	UCD_MIRROR_22d0_22df,
	UCD_MIRROR_22e0_22ef,
	UCD_MIRROR_22f0_22ff,
};
static const unsigned short    UCD_MIRROR_2300_230f[16]= {0x2300,0x2301,0x2302,0x2303,0x2304,0x2305,0x2306,0x2307,0x2309,0x2308,0x230b,0x230a,0x230c,0x230d,0x230e,0x230f,};
static const unsigned short    UCD_MIRROR_2320_232f[16]= {0x2320,0x2321,0x2322,0x2323,0x2324,0x2325,0x2326,0x2327,0x2328,0x232a,0x2329,0x232b,0x232c,0x232d,0x232e,0x232f,};
static const unsigned short * const UCD_MIRROR_2300_23ff[16]= {
	UCD_MIRROR_2300_230f,
	(const unsigned short *)0,
	UCD_MIRROR_2320_232f,
};
static const unsigned short    UCD_MIRROR_2760_276f[16]= {0x2760,0x2761,0x2762,0x2763,0x2764,0x2765,0x2766,0x2767,0x2769,0x2768,0x276b,0x276a,0x276d,0x276c,0x276f,0x276e,};
static const unsigned short    UCD_MIRROR_2770_277f[16]= {0x2771,0x2770,0x2773,0x2772,0x2775,0x2774,0x2776,0x2777,0x2778,0x2779,0x277a,0x277b,0x277c,0x277d,0x277e,0x277f,};
static const unsigned short    UCD_MIRROR_27c0_27cf[16]= {0x27c0,0x27c1,0x27c2,0x27c4,0x27c3,0x27c6,0x27c5,0x27c7,0x27c9,0x27c8,0x27ca,0x27cd,0x27cc,0x27cb,0x27ce,0x27cf,};
static const unsigned short    UCD_MIRROR_27d0_27df[16]= {0x27d0,0x27d1,0x27d2,0x27d3,0x27d4,0x27d6,0x27d5,0x27d7,0x27d8,0x27d9,0x27da,0x27db,0x27dc,0x27de,0x27dd,0x27df,};
static const unsigned short    UCD_MIRROR_27e0_27ef[16]= {0x27e0,0x27e1,0x27e3,0x27e2,0x27e5,0x27e4,0x27e7,0x27e6,0x27e9,0x27e8,0x27eb,0x27ea,0x27ed,0x27ec,0x27ef,0x27ee,};
static const unsigned short * const UCD_MIRROR_2700_27ff[16]= {
	(const unsigned short *)0,
	(const unsigned short *)0,
	(const unsigned short *)0,
	(const unsigned short *)0,
	(const unsigned short *)0,
	(const unsigned short *)0,
	UCD_MIRROR_2760_276f,
	UCD_MIRROR_2770_277f,
	(const unsigned short *)0,
	(const unsigned short *)0,
	(const unsigned short *)0,
	(const unsigned short *)0,
	UCD_MIRROR_27c0_27cf,
	UCD_MIRROR_27d0_27df,
	UCD_MIRROR_27e0_27ef,
};
static const unsigned short    UCD_MIRROR_2980_298f[16]= {0x2980,0x2981,0x2982,0x2984,0x2983,0x2986,0x2985,0x2988,0x2987,0x298a,0x2989,0x298c,0x298b,0x2990,0x298f,0x298e,};
static const unsigned short    UCD_MIRROR_2990_299f[16]= {0x298d,0x2992,0x2991,0x2994,0x2993,0x2996,0x2995,0x2998,0x2997,0x2999,0x299a,0x299b,0x299c,0x299d,0x299e,0x299f,};
static const unsigned short    UCD_MIRROR_29b0_29bf[16]= {0x29b0,0x29b1,0x29b2,0x29b3,0x29b4,0x29b5,0x29b6,0x29b7,0x2298,0x29b9,0x29ba,0x29bb,0x29bc,0x29bd,0x29be,0x29bf,};
static const unsigned short    UCD_MIRROR_29c0_29cf[16]= {0x29c1,0x29c0,0x29c2,0x29c3,0x29c5,0x29c4,0x29c6,0x29c7,0x29c8,0x29c9,0x29ca,0x29cb,0x29cc,0x29cd,0x29ce,0x29d0,};
static const unsigned short    UCD_MIRROR_29d0_29df[16]= {0x29cf,0x29d2,0x29d1,0x29d3,0x29d5,0x29d4,0x29d6,0x29d7,0x29d9,0x29d8,0x29db,0x29da,0x29dc,0x29dd,0x29de,0x29df,};
static const unsigned short    UCD_MIRROR_29f0_29ff[16]= {0x29f0,0x29f1,0x29f2,0x29f3,0x29f4,0x2215,0x29f6,0x29f7,0x29f9,0x29f8,0x29fa,0x29fb,0x29fd,0x29fc,0x29fe,0x29ff,};
static const unsigned short * const UCD_MIRROR_2900_29ff[16]= {
	(const unsigned short *)0,
	(const unsigned short *)0,
	(const unsigned short *)0,
	(const unsigned short *)0,
	(const unsigned short *)0,
	(const unsigned short *)0,
	(const unsigned short *)0,
	(const unsigned short *)0,
	UCD_MIRROR_2980_298f,
	UCD_MIRROR_2990_299f,
	(const unsigned short *)0,
	UCD_MIRROR_29b0_29bf,
	UCD_MIRROR_29c0_29cf,
	UCD_MIRROR_29d0_29df,
	(const unsigned short *)0,
	UCD_MIRROR_29f0_29ff,
};
static const unsigned short    UCD_MIRROR_2a20_2a2f[16]= {0x2a20,0x2a21,0x2a22,0x2a23,0x2a24,0x2a25,0x2a26,0x2a27,0x2a28,0x2a29,0x2a2a,0x2a2c,0x2a2b,0x2a2e,0x2a2d,0x2a2f,};
static const unsigned short    UCD_MIRROR_2a30_2a3f[16]= {0x2a30,0x2a31,0x2a32,0x2a33,0x2a35,0x2a34,0x2a36,0x2a37,0x2a38,0x2a39,0x2a3a,0x2a3b,0x2a3d,0x2a3c,0x2a3e,0x2a3f,};
static const unsigned short    UCD_MIRROR_2a60_2a6f[16]= {0x2a60,0x2a61,0x2a62,0x2a63,0x2a65,0x2a64,0x2a66,0x2a67,0x2a68,0x2a69,0x2a6a,0x2a6b,0x2a6c,0x2a6d,0x2a6e,0x2a6f,};
static const unsigned short    UCD_MIRROR_2a70_2a7f[16]= {0x2a70,0x2a71,0x2a72,0x2a73,0x2a74,0x2a75,0x2a76,0x2a77,0x2a78,0x2a7a,0x2a79,0x2a7b,0x2a7c,0x2a7e,0x2a7d,0x2a80,};
static const unsigned short    UCD_MIRROR_2a80_2a8f[16]= {0x2a7f,0x2a82,0x2a81,0x2a84,0x2a83,0x2a85,0x2a86,0x2a87,0x2a88,0x2a89,0x2a8a,0x2a8c,0x2a8b,0x2a8d,0x2a8e,0x2a8f,};
static const unsigned short    UCD_MIRROR_2a90_2a9f[16]= {0x2a90,0x2a92,0x2a91,0x2a94,0x2a93,0x2a96,0x2a95,0x2a98,0x2a97,0x2a9a,0x2a99,0x2a9c,0x2a9b,0x2a9d,0x2a9e,0x2a9f,};
static const unsigned short    UCD_MIRROR_2aa0_2aaf[16]= {0x2aa0,0x2aa2,0x2aa1,0x2aa3,0x2aa4,0x2aa5,0x2aa7,0x2aa6,0x2aa9,0x2aa8,0x2aab,0x2aaa,0x2aad,0x2aac,0x2aae,0x2ab0,};
static const unsigned short    UCD_MIRROR_2ab0_2abf[16]= {0x2aaf,0x2ab1,0x2ab2,0x2ab4,0x2ab3,0x2ab5,0x2ab6,0x2ab7,0x2ab8,0x2ab9,0x2aba,0x2abc,0x2abb,0x2abe,0x2abd,0x2ac0,};
static const unsigned short    UCD_MIRROR_2ac0_2acf[16]= {0x2abf,0x2ac2,0x2ac1,0x2ac4,0x2ac3,0x2ac6,0x2ac5,0x2ac7,0x2ac8,0x2ac9,0x2aca,0x2acb,0x2acc,0x2ace,0x2acd,0x2ad0,};
static const unsigned short    UCD_MIRROR_2ad0_2adf[16]= {0x2acf,0x2ad2,0x2ad1,0x2ad4,0x2ad3,0x2ad6,0x2ad5,0x2ad7,0x2ad8,0x2ad9,0x2ada,0x2adb,0x2adc,0x2add,0x22a6,0x2adf,};
static const unsigned short    UCD_MIRROR_2ae0_2aef[16]= {0x2ae0,0x2ae1,0x2ae2,0x22a9,0x22a8,0x22ab,0x2ae6,0x2ae7,0x2ae8,0x2ae9,0x2aea,0x2aeb,0x2aed,0x2aec,0x2aee,0x2aef,};
static const unsigned short    UCD_MIRROR_2af0_2aff[16]= {0x2af0,0x2af1,0x2af2,0x2af3,0x2af4,0x2af5,0x2af6,0x2af8,0x2af7,0x2afa,0x2af9,0x2afb,0x2afc,0x2afd,0x2afe,0x2aff,};
static const unsigned short * const UCD_MIRROR_2a00_2aff[16]= {
	(const unsigned short *)0,
	(const unsigned short *)0,
	UCD_MIRROR_2a20_2a2f,
	UCD_MIRROR_2a30_2a3f,
	(const unsigned short *)0,
	(const unsigned short *)0,
	UCD_MIRROR_2a60_2a6f,
	UCD_MIRROR_2a70_2a7f,
	UCD_MIRROR_2a80_2a8f,
	UCD_MIRROR_2a90_2a9f,
	UCD_MIRROR_2aa0_2aaf,
	UCD_MIRROR_2ab0_2abf,
	UCD_MIRROR_2ac0_2acf,
	UCD_MIRROR_2ad0_2adf,
	UCD_MIRROR_2ae0_2aef,
	UCD_MIRROR_2af0_2aff,
};
static const unsigned short    UCD_MIRROR_2e00_2e0f[16]= {0x2e00,0x2e01,0x2e03,0x2e02,0x2e05,0x2e04,0x2e06,0x2e07,0x2e08,0x2e0a,0x2e09,0x2e0b,0x2e0d,0x2e0c,0x2e0e,0x2e0f,};
static const unsigned short    UCD_MIRROR_2e10_2e1f[16]= {0x2e10,0x2e11,0x2e12,0x2e13,0x2e14,0x2e15,0x2e16,0x2e17,0x2e18,0x2e19,0x2e1a,0x2e1b,0x2e1d,0x2e1c,0x2e1e,0x2e1f,};
static const unsigned short    UCD_MIRROR_2e20_2e2f[16]= {0x2e21,0x2e20,0x2e23,0x2e22,0x2e25,0x2e24,0x2e27,0x2e26,0x2e29,0x2e28,0x2e2a,0x2e2b,0x2e2c,0x2e2d,0x2e2e,0x2e2f,};
static const unsigned short * const UCD_MIRROR_2e00_2eff[16]= {
	UCD_MIRROR_2e00_2e0f,
	UCD_MIRROR_2e10_2e1f,
	UCD_MIRROR_2e20_2e2f,
};
static const unsigned short * const * const UCD_MIRROR_2000_2fff[16]= {
	UCD_MIRROR_2000_20ff,
	(const unsigned short * const *)0,
	UCD_MIRROR_2200_22ff,
	UCD_MIRROR_2300_23ff,
	(const unsigned short * const *)0,
	(const unsigned short * const *)0,
	(const unsigned short * const *)0,
	UCD_MIRROR_2700_27ff,
	(const unsigned short * const *)0,
	UCD_MIRROR_2900_29ff,
	UCD_MIRROR_2a00_2aff,
	(const unsigned short * const *)0,
	(const unsigned short * const *)0,
	(const unsigned short * const *)0,
	UCD_MIRROR_2e00_2eff,
};
static const unsigned short    UCD_MIRROR_3000_300f[16]= {0x3000,0x3001,0x3002,0x3003,0x3004,0x3005,0x3006,0x3007,0x3009,0x3008,0x300b,0x300a,0x300d,0x300c,0x300f,0x300e,};
static const unsigned short    UCD_MIRROR_3010_301f[16]= {0x3011,0x3010,0x3012,0x3013,0x3015,0x3014,0x3017,0x3016,0x3019,0x3018,0x301b,0x301a,0x301c,0x301d,0x301e,0x301f,};
static const unsigned short * const UCD_MIRROR_3000_30ff[16]= {
	UCD_MIRROR_3000_300f,
	UCD_MIRROR_3010_301f,
};
static const unsigned short * const * const UCD_MIRROR_3000_3fff[16]= {
	UCD_MIRROR_3000_30ff,
};
static const unsigned short    UCD_MIRROR_fe50_fe5f[16]= {0xfe50,0xfe51,0xfe52,0xfe53,0xfe54,0xfe55,0xfe56,0xfe57,0xfe58,0xfe5a,0xfe59,0xfe5c,0xfe5b,0xfe5e,0xfe5d,0xfe5f,};
static const unsigned short    UCD_MIRROR_fe60_fe6f[16]= {0xfe60,0xfe61,0xfe62,0xfe63,0xfe65,0xfe64,0xfe66,0xfe67,0xfe68,0xfe69,0xfe6a,0xfe6b,0xfe6c,0xfe6d,0xfe6e,0xfe6f,};
static const unsigned short * const UCD_MIRROR_fe00_feff[16]= {
	(const unsigned short *)0,
	(const unsigned short *)0,
	(const unsigned short *)0,
	(const unsigned short *)0,
	(const unsigned short *)0,
	UCD_MIRROR_fe50_fe5f,
	UCD_MIRROR_fe60_fe6f,
};
static const unsigned short    UCD_MIRROR_ff00_ff0f[16]= {0xff00,0xff01,0xff02,0xff03,0xff04,0xff05,0xff06,0xff07,0xff09,0xff08,0xff0a,0xff0b,0xff0c,0xff0d,0xff0e,0xff0f,};
static const unsigned short    UCD_MIRROR_ff10_ff1f[16]= {0xff10,0xff11,0xff12,0xff13,0xff14,0xff15,0xff16,0xff17,0xff18,0xff19,0xff1a,0xff1b,0xff1e,0xff1d,0xff1c,0xff1f,};
static const unsigned short    UCD_MIRROR_ff30_ff3f[16]= {0xff30,0xff31,0xff32,0xff33,0xff34,0xff35,0xff36,0xff37,0xff38,0xff39,0xff3a,0xff3d,0xff3c,0xff3b,0xff3e,0xff3f,};
static const unsigned short    UCD_MIRROR_ff50_ff5f[16]= {0xff50,0xff51,0xff52,0xff53,0xff54,0xff55,0xff56,0xff57,0xff58,0xff59,0xff5a,0xff5d,0xff5c,0xff5b,0xff5e,0xff60,};
static const unsigned short    UCD_MIRROR_ff60_ff6f[16]= {0xff5f,0xff61,0xff63,0xff62,0xff64,0xff65,0xff66,0xff67,0xff68,0xff69,0xff6a,0xff6b,0xff6c,0xff6d,0xff6e,0xff6f,};
static const unsigned short * const UCD_MIRROR_ff00_ffff[16]= {
	UCD_MIRROR_ff00_ff0f,
	UCD_MIRROR_ff10_ff1f,
	(const unsigned short *)0,
	UCD_MIRROR_ff30_ff3f,
	(const unsigned short *)0,
	UCD_MIRROR_ff50_ff5f,
	UCD_MIRROR_ff60_ff6f,
};
static const unsigned short * const * const UCD_MIRROR_f000_ffff[16]= {
	(const unsigned short * const *)0,
	(const unsigned short * const *)0,
	(const unsigned short * const *)0,
	(const unsigned short * const *)0,
	(const unsigned short * const *)0,
	(const unsigned short * const *)0,
	(const unsigned short * const *)0,
	(const unsigned short * const *)0,
	(const unsigned short * const *)0,
	(const unsigned short * const *)0,
	(const unsigned short * const *)0,
	(const unsigned short * const *)0,
	(const unsigned short * const *)0,
	(const unsigned short * const *)0,
	UCD_MIRROR_fe00_feff,
	UCD_MIRROR_ff00_ffff,
};
static const unsigned short * const * const * const UCD_MIRROR[16]={
    UCD_MIRROR_0000_0fff,
    UCD_MIRROR_1000_1fff,
    UCD_MIRROR_2000_2fff,
    UCD_MIRROR_3000_3fff,
    (const unsigned short * const * const *)0,
    (const unsigned short * const * const *)0,
    (const unsigned short * const * const *)0,
    (const unsigned short * const * const *)0,
    (const unsigned short * const * const *)0,
    (const unsigned short * const * const *)0,
    (const unsigned short * const * const *)0,
    (const unsigned short * const * const *)0,
    (const unsigned short * const * const *)0,
    (const unsigned short * const * const *)0,
    (const unsigned short * const * const *)0,
    UCD_MIRROR_f000_ffff,
};

int ucdToMirror( int sym ) {
    return ucdMapSymbol( sym, UCD_MIRROR );
}
