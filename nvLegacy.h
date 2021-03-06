/*
 * Copyright (c) 2005, 2006, 2012, 2014 NVIDIA Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef __NV_LEGACY_H
#define __NV_LEGACY_H

typedef struct _LEGACY_INFO {
    unsigned int  uiDevId;
    unsigned int  uiSubVendorId;
    unsigned int  uiSubDevId;
    unsigned int  branch;
    char*         AdapterString;
} LEGACY_INFO;

typedef struct _LEGACY_STRINGS {
    unsigned int    branch;
    char*           description;
} LEGACY_STRINGS;

/*
 * This table describes how we should refer to legacy branches.
 */
static const LEGACY_STRINGS LegacyStrings[] = {
    { 6, "367.xx" },
    { 5, "340.xx" },
    { 4, "304.xx" },
    { 3, "173.14.xx" },
    { 2, "96.43.xx" },
    { 1, "71.86.xx" }
};

// This is the list of the legacy GPUs
static const LEGACY_INFO LegacyList[] = {
//    PCI-ID  Subvend Subdev   Branch  Marketing name
    { 0x0020, 0x0000, 0x0000,  1,      "RIVA TNT" },
    { 0x0028, 0x0000, 0x0000,  1,      "RIVA TNT2/TNT2 Pro" },
    { 0x00A0, 0x0000, 0x0000,  1,      "Aladdin TNT2" },
    { 0x002C, 0x0000, 0x0000,  1,      "Vanta/Vanta LT" },
    { 0x0029, 0x0000, 0x0000,  1,      "RIVA TNT2 Ultra" },
    { 0x002D, 0x0000, 0x0000,  1,      "RIVA TNT2 Model 64/Model 64 Pro" },
    { 0x0100, 0x0000, 0x0000,  1,      "GeForce 256" },
    { 0x0101, 0x0000, 0x0000,  1,      "GeForce DDR" },
    { 0x0103, 0x0000, 0x0000,  1,      "Quadro" },
    { 0x0150, 0x0000, 0x0000,  1,      "GeForce2 GTS/GeForce2 Pro" },
    { 0x0151, 0x0000, 0x0000,  1,      "GeForce2 Ti" },
    { 0x0152, 0x0000, 0x0000,  1,      "GeForce2 Ultra" },
    { 0x0153, 0x0000, 0x0000,  1,      "Quadro2 Pro" },
    { 0x0110, 0x0000, 0x0000,  2,      "GeForce2 MX/MX 400" },
    { 0x0111, 0x0000, 0x0000,  2,      "GeForce2 MX 100/200" },
    { 0x0113, 0x0000, 0x0000,  2,      "Quadro2 MXR/EX/Go" },
    { 0x0170, 0x0000, 0x0000,  2,      "GeForce4 MX 460" },
    { 0x0171, 0x0000, 0x0000,  2,      "GeForce4 MX 440" },
    { 0x0172, 0x0000, 0x0000,  2,      "GeForce4 MX 420" },
    { 0x0173, 0x0000, 0x0000,  2,      "GeForce4 MX 440-SE" },
    { 0x0178, 0x0000, 0x0000,  2,      "Quadro4 550 XGL" },
    { 0x017A, 0x0000, 0x0000,  2,      "Quadro NVS 400" },
    { 0x0181, 0x0000, 0x0000,  2,      "GeForce4 MX 440 with AGP8X" },
    { 0x0182, 0x0000, 0x0000,  2,      "GeForce4 MX 440SE with AGP8X" },
    { 0x0183, 0x0000, 0x0000,  2,      "GeForce4 MX 420 with AGP8X" },
    { 0x0185, 0x0000, 0x0000,  2,      "GeForce4 MX 4000" },
    { 0x0188, 0x0000, 0x0000,  2,      "Quadro4 580 XGL" },
    { 0x018A, 0x0000, 0x0000,  2,      "Quadro NVS 280 SD" },
    { 0x018B, 0x0000, 0x0000,  2,      "Quadro4 380 XGL" },
    { 0x018C, 0x0000, 0x0000,  2,      "Quadro NVS 50 PCI" },
    { 0x0200, 0x0000, 0x0000,  2,      "GeForce3" },
    { 0x0201, 0x0000, 0x0000,  2,      "GeForce3 Ti 200" },
    { 0x0202, 0x0000, 0x0000,  2,      "GeForce3 Ti 500" },
    { 0x0203, 0x0000, 0x0000,  2,      "Quadro DCC" },
    { 0x0250, 0x0000, 0x0000,  2,      "GeForce4 Ti 4600" },
    { 0x0251, 0x0000, 0x0000,  2,      "GeForce4 Ti 4400" },
    { 0x0253, 0x0000, 0x0000,  2,      "GeForce4 Ti 4200" },
    { 0x0258, 0x0000, 0x0000,  2,      "Quadro4 900 XGL" },
    { 0x0259, 0x0000, 0x0000,  2,      "Quadro4 750 XGL" },
    { 0x025B, 0x0000, 0x0000,  2,      "Quadro4 700 XGL" },
    { 0x0280, 0x0000, 0x0000,  2,      "GeForce4 Ti 4800" },
    { 0x0281, 0x0000, 0x0000,  2,      "GeForce4 Ti 4200 with AGP8X" },
    { 0x0282, 0x0000, 0x0000,  2,      "GeForce4 Ti 4800 SE" },
    { 0x0288, 0x0000, 0x0000,  2,      "Quadro4 980 XGL" },
    { 0x0289, 0x0000, 0x0000,  2,      "Quadro4 780 XGL" },
    { 0x0112, 0x0000, 0x0000,  2,      "GeForce2 Go" },
    { 0x0174, 0x0000, 0x0000,  2,      "GeForce4 440 Go" },
    { 0x0175, 0x0000, 0x0000,  2,      "GeForce4 420 Go" },
    { 0x0176, 0x0000, 0x0000,  2,      "GeForce4 420 Go 32M" },
    { 0x0177, 0x0000, 0x0000,  2,      "GeForce4 460 Go" },
    { 0x0179, 0x0000, 0x0000,  2,      "GeForce4 440 Go 64M" },
    { 0x017D, 0x0000, 0x0000,  2,      "GeForce4 410 Go 16M" },
    { 0x017C, 0x0000, 0x0000,  2,      "Quadro4 500 GoGL" },
    { 0x0286, 0x0000, 0x0000,  2,      "GeForce4 4200 Go" },
    { 0x028C, 0x0000, 0x0000,  2,      "Quadro4 700 GoGL" },
    { 0x01A0, 0x0000, 0x0000,  2,      "GeForce2 Integrated GPU" },
    { 0x01F0, 0x0000, 0x0000,  2,      "GeForce4 MX Integrated GPU" },
    { 0x0301, 0x0000, 0x0000,  3,      "GeForce FX 5800 Ultra" },
    { 0x0302, 0x0000, 0x0000,  3,      "GeForce FX 5800" },
    { 0x0311, 0x0000, 0x0000,  3,      "GeForce FX 5600 Ultra" },
    { 0x0312, 0x0000, 0x0000,  3,      "GeForce FX 5600" },
    { 0x0314, 0x0000, 0x0000,  3,      "GeForce FX 5600XT" },
    { 0x0320, 0x0000, 0x0000,  3,      "GeForce FX 5200" },
    { 0x0321, 0x0000, 0x0000,  3,      "GeForce FX 5200 Ultra" },
    { 0x0322, 0x0000, 0x0000,  3,      "GeForce FX 5200" },
    { 0x0323, 0x0000, 0x0000,  3,      "GeForce FX 5200LE" },
    { 0x0326, 0x0000, 0x0000,  3,      "GeForce FX 5500" },
    { 0x0327, 0x0000, 0x0000,  3,      "GeForce FX 5100" },
    { 0x0330, 0x0000, 0x0000,  3,      "GeForce FX 5900 Ultra" },
    { 0x0331, 0x0000, 0x0000,  3,      "GeForce FX 5900" },
    { 0x0332, 0x0000, 0x0000,  3,      "GeForce FX 5900XT" },
    { 0x0333, 0x0000, 0x0000,  3,      "GeForce FX 5950 Ultra" },
    { 0x0334, 0x0000, 0x0000,  3,      "GeForce FX 5900ZT" },
    { 0x0341, 0x0000, 0x0000,  3,      "GeForce FX 5700 Ultra" },
    { 0x0342, 0x0000, 0x0000,  3,      "GeForce FX 5700" },
    { 0x0343, 0x0000, 0x0000,  3,      "GeForce FX 5700LE" },
    { 0x0344, 0x0000, 0x0000,  3,      "GeForce FX 5700VE" },
    { 0x00FC, 0x0000, 0x0000,  3,      "Quadro FX 330" },
    { 0x00FD, 0x0000, 0x0000,  3,      "Quadro FX 330" },
    { 0x00FE, 0x0000, 0x0000,  3,      "Quadro FX 1300" },
    { 0x032B, 0x0000, 0x0000,  3,      "Quadro FX 500/FX 600" },
    { 0x033F, 0x0000, 0x0000,  3,      "Quadro FX 700" },
    { 0x0309, 0x0000, 0x0000,  3,      "Quadro FX 1000" },
    { 0x034E, 0x0000, 0x0000,  3,      "Quadro FX 1100" },
    { 0x0308, 0x0000, 0x0000,  3,      "Quadro FX 2000" },
    { 0x0338, 0x0000, 0x0000,  3,      "Quadro FX 3000" },
    { 0x031A, 0x0000, 0x0000,  3,      "GeForce FX Go5600" },
    { 0x031B, 0x0000, 0x0000,  3,      "GeForce FX Go5650" },
    { 0x0324, 0x0000, 0x0000,  3,      "GeForce FX Go5200" },
    { 0x0325, 0x0000, 0x0000,  3,      "GeForce FX Go5250" },
    { 0x0328, 0x0000, 0x0000,  3,      "GeForce FX Go5200 32M/64M" },
    { 0x032C, 0x0000, 0x0000,  3,      "GeForce FX Go53xx" },
    { 0x032D, 0x0000, 0x0000,  3,      "GeForce FX Go5100" },
    { 0x0347, 0x0000, 0x0000,  3,      "GeForce FX Go5700" },
    { 0x0348, 0x0000, 0x0000,  3,      "GeForce FX Go5700" },
    { 0x034C, 0x0000, 0x0000,  3,      "Quadro FX Go1000" },
    { 0x00FA, 0x0000, 0x0000,  3,      "GeForce PCX 5750" },
    { 0x00FB, 0x0000, 0x0000,  3,      "GeForce PCX 5900" },
    { 0x00FC, 0x0000, 0x0000,  3,      "GeForce PCX 5300" },
    { 0x00FD, 0x0000, 0x0000,  3,      "Quadro NVS 280 PCI-E" },
    { 0x032A, 0x0000, 0x0000,  3,      "Quadro NVS 55/280 PCI" },
    { 0x031C, 0x0000, 0x0000,  3,      "Quadro FX Go700" },
    { 0x00F1, 0x0000, 0x0000,  4,      "GeForce 6600 GT" },
    { 0x00F2, 0x0000, 0x0000,  4,      "GeForce 6600" },
    { 0x00F3, 0x0000, 0x0000,  4,      "GeForce 6200" },
    { 0x00F4, 0x0000, 0x0000,  4,      "GeForce 6600 LE" },
    { 0x00F5, 0x0000, 0x0000,  4,      "GeForce 7800 GS" },
    { 0x00F6, 0x0000, 0x0000,  4,      "GeForce 6800 GS" },
    { 0x00F8, 0x0000, 0x0000,  4,      "Quadro FX 3400" },
    { 0x00F8, 0x0000, 0x0000,  4,      "Quadro FX 4000" },
    { 0x00F9, 0x0000, 0x0000,  4,      "GeForce 6800 Ultra" },
    { 0x02E0, 0x0000, 0x0000,  4,      "GeForce 7600 GT" },
    { 0x02E1, 0x0000, 0x0000,  4,      "GeForce 7600 GS" },
    { 0x02E2, 0x0000, 0x0000,  4,      "GeForce 7300 GT" },
    { 0x02E3, 0x0000, 0x0000,  4,      "GeForce 7900 GS" },
    { 0x02E4, 0x0000, 0x0000,  4,      "GeForce 7950 GT" },
    { 0x0240, 0x0000, 0x0000,  4,      "GeForce 6150" },
    { 0x0241, 0x0000, 0x0000,  4,      "GeForce 6150 LE" },
    { 0x0242, 0x0000, 0x0000,  4,      "GeForce 6100" },
    { 0x0245, 0x0000, 0x0000,  4,      "Quadro NVS 210S / GeForce 6150LE" },
    { 0x03D0, 0x0000, 0x0000,  4,      "GeForce 6150SE nForce 430" },
    { 0x03D1, 0x0000, 0x0000,  4,      "GeForce 6100 nForce 405" },
    { 0x03D2, 0x0000, 0x0000,  4,      "GeForce 6100 nForce 400" },
    { 0x03D5, 0x0000, 0x0000,  4,      "GeForce 6100 nForce 420" },
    { 0x03D6, 0x0000, 0x0000,  4,      "GeForce 7025 / nForce 630a" },
    { 0x053A, 0x0000, 0x0000,  4,      "GeForce 7050 PV / nForce 630a" },
    { 0x053B, 0x0000, 0x0000,  4,      "GeForce 7050 PV / nForce 630a" },
    { 0x053E, 0x0000, 0x0000,  4,      "GeForce 7025 / nForce 630a" },
    { 0x07E0, 0x0000, 0x0000,  4,      "GeForce 7150 / nForce 630i" },
    { 0x07E1, 0x0000, 0x0000,  4,      "GeForce 7100 / nForce 630i" },
    { 0x07E2, 0x0000, 0x0000,  4,      "GeForce 7050 / nForce 630i" },
    { 0x07E3, 0x0000, 0x0000,  4,      "GeForce 7050 / nForce 610i" },
    { 0x07E5, 0x0000, 0x0000,  4,      "GeForce 7050 / nForce 620i" },
    { 0x0090, 0x0000, 0x0000,  4,      "GeForce 7800 GTX" },
    { 0x0091, 0x0000, 0x0000,  4,      "GeForce 7800 GTX" },
    { 0x0092, 0x0000, 0x0000,  4,      "GeForce 7800 GT" },
    { 0x0093, 0x0000, 0x0000,  4,      "GeForce 7800 GS" },
    { 0x0095, 0x0000, 0x0000,  4,      "GeForce 7800 SLI" },
    { 0x009D, 0x0000, 0x0000,  4,      "Quadro FX 4500" },
    { 0x0290, 0x0000, 0x0000,  4,      "GeForce 7900 GTX" },
    { 0x0291, 0x0000, 0x0000,  4,      "GeForce 7900 GT/GTO" },
    { 0x0292, 0x0000, 0x0000,  4,      "GeForce 7900 GS" },
    { 0x0293, 0x0000, 0x0000,  4,      "GeForce 7950 GX2" },
    { 0x0294, 0x0000, 0x0000,  4,      "GeForce 7950 GX2" },
    { 0x0295, 0x0000, 0x0000,  4,      "GeForce 7950 GT" },
    { 0x029C, 0x0000, 0x0000,  4,      "Quadro FX 5500" },
    { 0x029D, 0x0000, 0x0000,  4,      "Quadro FX 3500" },
    { 0x029E, 0x0000, 0x0000,  4,      "Quadro FX 1500" },
    { 0x029F, 0x0000, 0x0000,  4,      "Quadro FX 4500 X2" },
    { 0x01D0, 0x0000, 0x0000,  4,      "GeForce 7350 LE" },
    { 0x01D1, 0x0000, 0x0000,  4,      "GeForce 7300 LE" },
    { 0x01D2, 0x0000, 0x0000,  4,      "GeForce 7550 LE" },
    { 0x01D3, 0x0000, 0x0000,  4,      "GeForce 7300 SE/7200 GS" },
    { 0x01DD, 0x0000, 0x0000,  4,      "GeForce 7500 LE" },
    { 0x01DE, 0x0000, 0x0000,  4,      "Quadro FX 350" },
    { 0x01DF, 0x0000, 0x0000,  4,      "GeForce 7300 GS" },
    { 0x038B, 0x0000, 0x0000,  4,      "GeForce 7650 GS" },
    { 0x0390, 0x0000, 0x0000,  4,      "GeForce 7650 GS" },
    { 0x0391, 0x0000, 0x0000,  4,      "GeForce 7600 GT" },
    { 0x0392, 0x0000, 0x0000,  4,      "GeForce 7600 GS" },
    { 0x0393, 0x0000, 0x0000,  4,      "GeForce 7300 GT" },
    { 0x0394, 0x0000, 0x0000,  4,      "GeForce 7600 LE" },
    { 0x0395, 0x0000, 0x0000,  4,      "GeForce 7300 GT" },
    { 0x039E, 0x0000, 0x0000,  4,      "Quadro FX 560" },
    { 0x0040, 0x0000, 0x0000,  4,      "GeForce 6800 Ultra" },
    { 0x0041, 0x0000, 0x0000,  4,      "GeForce 6800" },
    { 0x0042, 0x0000, 0x0000,  4,      "GeForce 6800 LE" },
    { 0x0043, 0x0000, 0x0000,  4,      "GeForce 6800 XE" },
    { 0x0044, 0x0000, 0x0000,  4,      "GeForce 6800 XT" },
    { 0x0045, 0x0000, 0x0000,  4,      "GeForce 6800 GT" },
    { 0x0047, 0x0000, 0x0000,  4,      "GeForce 6800 GS" },
    { 0x0048, 0x0000, 0x0000,  4,      "GeForce 6800 XT" },
    { 0x004E, 0x0000, 0x0000,  4,      "Quadro FX 4000" },
    { 0x00C0, 0x0000, 0x0000,  4,      "GeForce 6800 GS" },
    { 0x00C1, 0x0000, 0x0000,  4,      "GeForce 6800" },
    { 0x00C2, 0x0000, 0x0000,  4,      "GeForce 6800 LE" },
    { 0x00C3, 0x0000, 0x0000,  4,      "GeForce 6800 XT" },
    { 0x00CD, 0x0000, 0x0000,  4,      "Quadro FX 3450/4000 SDI" },
    { 0x00CE, 0x0000, 0x0000,  4,      "Quadro FX 1400" },
    { 0x0140, 0x0000, 0x0000,  4,      "GeForce 6600 GT" },
    { 0x0141, 0x0000, 0x0000,  4,      "GeForce 6600" },
    { 0x0142, 0x0000, 0x0000,  4,      "GeForce 6600 LE" },
    { 0x0143, 0x0000, 0x0000,  4,      "GeForce 6600 VE" },
    { 0x0145, 0x0000, 0x0000,  4,      "GeForce 6610 XL" },
    { 0x0147, 0x0000, 0x0000,  4,      "GeForce 6700 XL" },
    { 0x014A, 0x0000, 0x0000,  4,      "Quadro NVS 440" },
    { 0x014C, 0x0000, 0x0000,  4,      "Quadro FX 540M" },
    { 0x014D, 0x0000, 0x0000,  4,      "Quadro FX 550" },
    { 0x014E, 0x0000, 0x0000,  4,      "Quadro FX 540" },
    { 0x014F, 0x0000, 0x0000,  4,      "GeForce 6200" },
    { 0x0160, 0x0000, 0x0000,  4,      "GeForce 6500" },
    { 0x0161, 0x0000, 0x0000,  4,      "GeForce 6200 TurboCache(TM)" },
    { 0x0162, 0x0000, 0x0000,  4,      "GeForce 6200SE TurboCache(TM)" },
    { 0x0163, 0x0000, 0x0000,  4,      "GeForce 6200 LE" },
    { 0x0165, 0x0000, 0x0000,  4,      "Quadro NVS 285" },
    { 0x0169, 0x0000, 0x0000,  4,      "GeForce 6250" },
    { 0x016A, 0x0000, 0x0000,  4,      "GeForce 7100 GS" },
    { 0x0221, 0x0000, 0x0000,  4,      "GeForce 6200" },
    { 0x0222, 0x0000, 0x0000,  4,      "GeForce 6200 A-LE" },
    { 0x0046, 0x0000, 0x0000,  4,      "GeForce 6800 GT" },
    { 0x0211, 0x0000, 0x0000,  4,      "GeForce 6800" },
    { 0x0212, 0x0000, 0x0000,  4,      "GeForce 6800 LE" },
    { 0x0215, 0x0000, 0x0000,  4,      "GeForce 6800 GT" },
    { 0x0218, 0x0000, 0x0000,  4,      "GeForce 6800 XT" },
    { 0x0244, 0x0000, 0x0000,  4,      "GeForce Go 6150" },
    { 0x0247, 0x0000, 0x0000,  4,      "GeForce Go 6100" },
    { 0x0531, 0x0000, 0x0000,  4,      "GeForce 7150M / nForce 630M" },
    { 0x0533, 0x0000, 0x0000,  4,      "GeForce 7000M / nForce 610M" },
    { 0x0098, 0x0000, 0x0000,  4,      "GeForce Go 7800" },
    { 0x0099, 0x0000, 0x0000,  4,      "GeForce Go 7800 GTX" },
    { 0x0297, 0x0000, 0x0000,  4,      "GeForce Go 7950 GTX" },
    { 0x0298, 0x0000, 0x0000,  4,      "GeForce Go 7900 GS" },
    { 0x0299, 0x0000, 0x0000,  4,      "Quadro NVS 510M" },
    { 0x029A, 0x0000, 0x0000,  4,      "Quadro FX 2500M" },
    { 0x029B, 0x0000, 0x0000,  4,      "Quadro FX 1500M" },
    { 0x01D6, 0x0000, 0x0000,  4,      "GeForce Go 7200" },
    { 0x01D7, 0x0000, 0x0000,  4,      "GeForce Go 7300" },
    { 0x01D8, 0x0000, 0x0000,  4,      "GeForce Go 7400" },
    { 0x01DA, 0x0000, 0x0000,  4,      "Quadro NVS 110M" },
    { 0x01DB, 0x0000, 0x0000,  4,      "Quadro NVS 120M" },
    { 0x01DC, 0x0000, 0x0000,  4,      "Quadro FX 350M" },
    { 0x0397, 0x0000, 0x0000,  4,      "GeForce Go 7700" },
    { 0x0398, 0x0000, 0x0000,  4,      "GeForce Go 7600" },
    { 0x0399, 0x0000, 0x0000,  4,      "GeForce Go 7600 GT" },
    { 0x039C, 0x0000, 0x0000,  4,      "Quadro FX 560M" },
    { 0x00C8, 0x0000, 0x0000,  4,      "GeForce Go 6800" },
    { 0x00C9, 0x0000, 0x0000,  4,      "GeForce Go 6800 Ultra" },
    { 0x00CC, 0x0000, 0x0000,  4,      "Quadro FX Go1400" },
    { 0x0144, 0x0000, 0x0000,  4,      "GeForce Go 6600" },
    { 0x0146, 0x0000, 0x0000,  4,      "GeForce Go 6600 TE/6200 TE" },
    { 0x0148, 0x0000, 0x0000,  4,      "GeForce Go 6600" },
    { 0x0149, 0x0000, 0x0000,  4,      "GeForce Go 6600 GT" },
    { 0x0164, 0x0000, 0x0000,  4,      "GeForce Go 6200" },
    { 0x0166, 0x0000, 0x0000,  4,      "GeForce Go 6400" },
    { 0x0167, 0x0000, 0x0000,  4,      "GeForce Go 6200" },
    { 0x0168, 0x0000, 0x0000,  4,      "GeForce Go 6400" },
    { 0x0840, 0x0000, 0x0000,  5,      "GeForce 8200M" },
    { 0x0846, 0x0000, 0x0000,  5,      "GeForce 9200" },
    { 0x0847, 0x0000, 0x0000,  5,      "GeForce 9100" },
    { 0x0848, 0x0000, 0x0000,  5,      "GeForce 8300" },
    { 0x0849, 0x0000, 0x0000,  5,      "GeForce 8200" },
    { 0x084A, 0x0000, 0x0000,  5,      "nForce 730a" },
    { 0x084B, 0x0000, 0x0000,  5,      "GeForce 9200" },
    { 0x084C, 0x0000, 0x0000,  5,      "nForce 980a/780a SLI" },
    { 0x084D, 0x0000, 0x0000,  5,      "nForce 750a SLI" },
    { 0x084F, 0x0000, 0x0000,  5,      "GeForce 8100 / nForce 720a" },
    { 0x0860, 0x0000, 0x0000,  5,      "GeForce 9400" },
    { 0x0861, 0x0000, 0x0000,  5,      "GeForce 9400" },
    { 0x0862, 0x0000, 0x0000,  5,      "GeForce 9400M G" },
    { 0x0863, 0x0000, 0x0000,  5,      "GeForce 9400M" },
    { 0x0864, 0x0000, 0x0000,  5,      "GeForce 9300" },
    { 0x0865, 0x0000, 0x0000,  5,      "ION" },
    { 0x0866, 0x0000, 0x0000,  5,      "GeForce 9400M G" },
    { 0x0866, 0x106B, 0x00B1,  5,      "GeForce 9400M" },
    { 0x0867, 0x0000, 0x0000,  5,      "GeForce 9400" },
    { 0x0868, 0x0000, 0x0000,  5,      "nForce 760i SLI" },
    { 0x0869, 0x0000, 0x0000,  5,      "GeForce 9400" },
    { 0x086A, 0x0000, 0x0000,  5,      "GeForce 9400" },
    { 0x086C, 0x0000, 0x0000,  5,      "GeForce 9300 / nForce 730i" },
    { 0x086D, 0x0000, 0x0000,  5,      "GeForce 9200" },
    { 0x086E, 0x0000, 0x0000,  5,      "GeForce 9100M G" },
    { 0x086F, 0x0000, 0x0000,  5,      "GeForce 8200M G" },
    { 0x0870, 0x0000, 0x0000,  5,      "GeForce 9400M" },
    { 0x0871, 0x0000, 0x0000,  5,      "GeForce 9200" },
    { 0x0872, 0x0000, 0x0000,  5,      "GeForce G102M" },
    { 0x0872, 0x1043, 0x1C42,  5,      "GeForce G205M" },
    { 0x0873, 0x0000, 0x0000,  5,      "GeForce G102M" },
    { 0x0873, 0x1043, 0x1C52,  5,      "GeForce G205M" },
    { 0x0874, 0x0000, 0x0000,  5,      "ION" },
    { 0x0876, 0x0000, 0x0000,  5,      "ION" },
    { 0x087A, 0x0000, 0x0000,  5,      "GeForce 9400" },
    { 0x087D, 0x0000, 0x0000,  5,      "ION" },
    { 0x0A20, 0x0000, 0x0000,  5,      "GeForce GT 220" },
    { 0x0A22, 0x0000, 0x0000,  5,      "GeForce 315" },
    { 0x0A23, 0x0000, 0x0000,  5,      "GeForce 210" },
    { 0x0A38, 0x0000, 0x0000,  5,      "Quadro 400" },
    { 0x0A60, 0x0000, 0x0000,  5,      "GeForce G210" },
    { 0x0A62, 0x0000, 0x0000,  5,      "GeForce 205" },
    { 0x0A63, 0x0000, 0x0000,  5,      "GeForce 310" },
    { 0x0A64, 0x0000, 0x0000,  5,      "Second Generation ION" },
    { 0x0A65, 0x0000, 0x0000,  5,      "GeForce 210" },
    { 0x0A66, 0x0000, 0x0000,  5,      "GeForce 310" },
    { 0x0A67, 0x0000, 0x0000,  5,      "GeForce 315" },
    { 0x0A68, 0x0000, 0x0000,  5,      "GeForce G105M" },
    { 0x0A69, 0x0000, 0x0000,  5,      "GeForce G105M" },
    { 0x0A6A, 0x0000, 0x0000,  5,      "NVS 2100M" },
    { 0x0A6C, 0x0000, 0x0000,  5,      "NVS 3100M" },
    { 0x0A6E, 0x0000, 0x0000,  5,      "GeForce 305M" },
    { 0x0A6E, 0x17AA, 0x3607,  5,      "Second Generation ION" },
    { 0x0A6F, 0x0000, 0x0000,  5,      "Second Generation ION" },
    { 0x0A76, 0x0000, 0x0000,  5,      "Second Generation ION" },
    { 0x0A78, 0x0000, 0x0000,  5,      "Quadro FX 380 LP" },
    { 0x0CA0, 0x0000, 0x0000,  5,      "GeForce GT 330" },
    { 0x0CA2, 0x0000, 0x0000,  5,      "GeForce GT 320" },
    { 0x0CA3, 0x0000, 0x0000,  5,      "GeForce GT 240" },
    { 0x0CA4, 0x0000, 0x0000,  5,      "GeForce GT 340" },
    { 0x0CA5, 0x0000, 0x0000,  5,      "GeForce GT 220" },
    { 0x0CA7, 0x0000, 0x0000,  5,      "GeForce GT 330" },
    { 0x0CAC, 0x0000, 0x0000,  5,      "GeForce GT 220" },
    { 0x05E0, 0x0000, 0x0000,  5,      "GeForce GTX 295" },
    { 0x05E1, 0x0000, 0x0000,  5,      "GeForce GTX 280" },
    { 0x05E2, 0x0000, 0x0000,  5,      "GeForce GTX 260" },
    { 0x05E3, 0x0000, 0x0000,  5,      "GeForce GTX 285" },
    { 0x05E6, 0x0000, 0x0000,  5,      "GeForce GTX 275" },
    { 0x05E7, 0x0000, 0x0000,  5,      "Tesla C1060" },
    { 0x05E7, 0x10DE, 0x0595,  5,      "Tesla T10 Processor" },
    { 0x05E7, 0x10DE, 0x068F,  5,      "Tesla T10 Processor" },
    { 0x05E7, 0x10DE, 0x0697,  5,      "Tesla M1060" },
    { 0x05E7, 0x10DE, 0x0714,  5,      "Tesla M1060" },
    { 0x05E7, 0x10DE, 0x0743,  5,      "Tesla M1060" },
    { 0x05EA, 0x0000, 0x0000,  5,      "GeForce GTX 260" },
    { 0x05EB, 0x0000, 0x0000,  5,      "GeForce GTX 295" },
    { 0x05ED, 0x0000, 0x0000,  5,      "Quadroplex 2200 D2" },
    { 0x05F8, 0x0000, 0x0000,  5,      "Quadroplex 2200 S4" },
    { 0x05F9, 0x0000, 0x0000,  5,      "Quadro CX" },
    { 0x05FD, 0x0000, 0x0000,  5,      "Quadro FX 5800" },
    { 0x05FE, 0x0000, 0x0000,  5,      "Quadro FX 4800" },
    { 0x05FF, 0x0000, 0x0000,  5,      "Quadro FX 3800" },
    { 0x0191, 0x0000, 0x0000,  5,      "GeForce 8800 GTX" },
    { 0x0193, 0x0000, 0x0000,  5,      "GeForce 8800 GTS" },
    { 0x0194, 0x0000, 0x0000,  5,      "GeForce 8800 Ultra" },
    { 0x0197, 0x0000, 0x0000,  5,      "Tesla C870" },
    { 0x019D, 0x0000, 0x0000,  5,      "Quadro FX 5600" },
    { 0x019E, 0x0000, 0x0000,  5,      "Quadro FX 4600" },
    { 0x0400, 0x0000, 0x0000,  5,      "GeForce 8600 GTS" },
    { 0x0401, 0x0000, 0x0000,  5,      "GeForce 8600 GT" },
    { 0x0402, 0x0000, 0x0000,  5,      "GeForce 8600 GT" },
    { 0x0403, 0x0000, 0x0000,  5,      "GeForce 8600 GS" },
    { 0x0404, 0x0000, 0x0000,  5,      "GeForce 8400 GS" },
    { 0x0405, 0x0000, 0x0000,  5,      "GeForce 9500M GS" },
    { 0x0406, 0x0000, 0x0000,  5,      "GeForce 8300 GS" },
    { 0x040B, 0x0000, 0x0000,  5,      "Quadro NVS 320M" },
    { 0x040C, 0x0000, 0x0000,  5,      "Quadro FX 570M" },
    { 0x040D, 0x0000, 0x0000,  5,      "Quadro FX 1600M" },
    { 0x040E, 0x0000, 0x0000,  5,      "Quadro FX 570" },
    { 0x040F, 0x0000, 0x0000,  5,      "Quadro FX 1700" },
    { 0x0410, 0x0000, 0x0000,  5,      "GeForce GT 330" },
    { 0x0420, 0x0000, 0x0000,  5,      "GeForce 8400 SE" },
    { 0x0421, 0x0000, 0x0000,  5,      "GeForce 8500 GT" },
    { 0x0422, 0x0000, 0x0000,  5,      "GeForce 8400 GS" },
    { 0x0423, 0x0000, 0x0000,  5,      "GeForce 8300 GS" },
    { 0x0424, 0x0000, 0x0000,  5,      "GeForce 8400 GS" },
    { 0x042C, 0x0000, 0x0000,  5,      "GeForce 9400 GT" },
    { 0x042D, 0x0000, 0x0000,  5,      "Quadro FX 360M" },
    { 0x042E, 0x0000, 0x0000,  5,      "GeForce 9300M G" },
    { 0x042F, 0x0000, 0x0000,  5,      "Quadro NVS 290" },
    { 0x0600, 0x0000, 0x0000,  5,      "GeForce 8800 GTS 512" },
    { 0x0601, 0x0000, 0x0000,  5,      "GeForce 9800 GT" },
    { 0x0602, 0x0000, 0x0000,  5,      "GeForce 8800 GT" },
    { 0x0603, 0x0000, 0x0000,  5,      "GeForce GT 230" },
    { 0x0605, 0x0000, 0x0000,  5,      "GeForce 9800 GT" },
    { 0x0606, 0x0000, 0x0000,  5,      "GeForce 8800 GS" },
    { 0x0607, 0x0000, 0x0000,  5,      "GeForce GTS 240" },
    { 0x0611, 0x0000, 0x0000,  5,      "GeForce 8800 GT" },
    { 0x0618, 0x0000, 0x0000,  5,      "GeForce GTX 260M" },
    { 0x0619, 0x0000, 0x0000,  5,      "Quadro FX 4700 X2" },
    { 0x061A, 0x0000, 0x0000,  5,      "Quadro FX 3700" },
    { 0x061B, 0x0000, 0x0000,  5,      "Quadro VX 200" },
    { 0x06E0, 0x0000, 0x0000,  5,      "GeForce 9300 GE" },
    { 0x06E1, 0x0000, 0x0000,  5,      "GeForce 9300 GS" },
    { 0x06E2, 0x0000, 0x0000,  5,      "GeForce 8400" },
    { 0x06E3, 0x0000, 0x0000,  5,      "GeForce 8400 SE" },
    { 0x06E4, 0x0000, 0x0000,  5,      "GeForce 8400 GS" },
    { 0x06E7, 0x0000, 0x0000,  5,      "GeForce 9300 SE" },
    { 0x06FF, 0x0000, 0x0000,  5,      "HICx16 + Graphics" },
    { 0x06FF, 0x10DE, 0x0711,  5,      "HICx8 + Graphics" },
    { 0x0844, 0x0000, 0x0000,  5,      "GeForce 9100M G" },
    { 0x0845, 0x0000, 0x0000,  5,      "GeForce 8200M G" },
    { 0x087E, 0x0000, 0x0000,  5,      "ION LE" },
    { 0x087F, 0x0000, 0x0000,  5,      "ION LE" },
    { 0x08A0, 0x0000, 0x0000,  5,      "GeForce 320M" },
    { 0x08A2, 0x0000, 0x0000,  5,      "GeForce 320M" },
    { 0x08A3, 0x0000, 0x0000,  5,      "GeForce 320M" },
    { 0x08A4, 0x0000, 0x0000,  5,      "GeForce 320M" },
    { 0x08A5, 0x0000, 0x0000,  5,      "GeForce 320M" },
    { 0x0A26, 0x0000, 0x0000,  5,      "GeForce 405" },
    { 0x0A27, 0x0000, 0x0000,  5,      "GeForce 405" },
    { 0x0A28, 0x0000, 0x0000,  5,      "GeForce GT 230M" },
    { 0x0A29, 0x0000, 0x0000,  5,      "GeForce GT 330M" },
    { 0x0A2A, 0x0000, 0x0000,  5,      "GeForce GT 230M" },
    { 0x0A2B, 0x0000, 0x0000,  5,      "GeForce GT 330M" },
    { 0x0A2C, 0x0000, 0x0000,  5,      "NVS 5100M" },
    { 0x0A2D, 0x0000, 0x0000,  5,      "GeForce GT 320M" },
    { 0x0A32, 0x0000, 0x0000,  5,      "GeForce GT 415" },
    { 0x0A34, 0x0000, 0x0000,  5,      "GeForce GT 240M" },
    { 0x0A35, 0x0000, 0x0000,  5,      "GeForce GT 325M" },
    { 0x0A3C, 0x0000, 0x0000,  5,      "Quadro FX 880M" },
    { 0x0A70, 0x0000, 0x0000,  5,      "GeForce 310M" },
    { 0x0A70, 0x17AA, 0x3605,  5,      "Second Generation ION" },
    { 0x0A70, 0x17AA, 0x3617,  5,      "Second Generation ION" },
    { 0x0A71, 0x0000, 0x0000,  5,      "GeForce 305M" },
    { 0x0A72, 0x0000, 0x0000,  5,      "GeForce 310M" },
    { 0x0A73, 0x0000, 0x0000,  5,      "GeForce 305M" },
    { 0x0A73, 0x17AA, 0x3607,  5,      "Second Generation ION" },
    { 0x0A73, 0x17AA, 0x3610,  5,      "Second Generation ION" },
    { 0x0A74, 0x0000, 0x0000,  5,      "GeForce G210M" },
    { 0x0A74, 0x17AA, 0x903A,  5,      "GeForce G210" },
    { 0x0A75, 0x0000, 0x0000,  5,      "GeForce 310M" },
    { 0x0A75, 0x17AA, 0x3605,  5,      "Second Generation ION" },
    { 0x0A7A, 0x0000, 0x0000,  5,      "GeForce 315M" },
    { 0x0A7A, 0x1BFD, 0x0003,  5,      "GeForce 405" },
    { 0x0A7A, 0x17AA, 0x3950,  5,      "GeForce 405M" },
    { 0x0A7A, 0x17AA, 0x397D,  5,      "GeForce 405M" },
    { 0x0A7A, 0x1642, 0x3980,  5,      "GeForce 405" },
    { 0x0A7A, 0x1BFD, 0x8006,  5,      "GeForce 405" },
    { 0x0A7A, 0x1B0A, 0x90B4,  5,      "GeForce 405" },
    { 0x0A7A, 0x1462, 0xAA51,  5,      "GeForce 405" },
    { 0x0A7A, 0x1462, 0xAA58,  5,      "GeForce 405" },
    { 0x0A7A, 0x1462, 0xAC71,  5,      "GeForce 405" },
    { 0x0A7A, 0x1462, 0xAC82,  5,      "GeForce 405" },
    { 0x0A7C, 0x0000, 0x0000,  5,      "Quadro FX 380M" },
    { 0x0CA8, 0x0000, 0x0000,  5,      "GeForce GTS 260M" },
    { 0x0CA9, 0x0000, 0x0000,  5,      "GeForce GTS 250M" },
    { 0x0CAF, 0x0000, 0x0000,  5,      "GeForce GT 335M" },
    { 0x0CB0, 0x0000, 0x0000,  5,      "GeForce GTS 350M" },
    { 0x0CB1, 0x0000, 0x0000,  5,      "GeForce GTS 360M" },
    { 0x0CBC, 0x0000, 0x0000,  5,      "Quadro FX 1800M" },
    { 0x0407, 0x0000, 0x0000,  5,      "GeForce 8600M GT" },
    { 0x0408, 0x0000, 0x0000,  5,      "GeForce 9650M GS" },
    { 0x0409, 0x0000, 0x0000,  5,      "GeForce 8700M GT" },
    { 0x040A, 0x0000, 0x0000,  5,      "Quadro FX 370" },
    { 0x0425, 0x0000, 0x0000,  5,      "GeForce 8600M GS" },
    { 0x0426, 0x0000, 0x0000,  5,      "GeForce 8400M GT" },
    { 0x0427, 0x0000, 0x0000,  5,      "GeForce 8400M GS" },
    { 0x0428, 0x0000, 0x0000,  5,      "GeForce 8400M G" },
    { 0x0429, 0x0000, 0x0000,  5,      "Quadro NVS 140M" },
    { 0x042A, 0x0000, 0x0000,  5,      "Quadro NVS 130M" },
    { 0x042B, 0x0000, 0x0000,  5,      "Quadro NVS 135M" },
    { 0x0604, 0x0000, 0x0000,  5,      "GeForce 9800 GX2" },
    { 0x0608, 0x0000, 0x0000,  5,      "GeForce 9800M GTX" },
    { 0x0609, 0x0000, 0x0000,  5,      "GeForce 8800M GTS" },
    { 0x0609, 0x106B, 0x00A7,  5,      "GeForce 8800 GS" },
    { 0x060A, 0x0000, 0x0000,  5,      "GeForce GTX 280M" },
    { 0x060B, 0x0000, 0x0000,  5,      "GeForce 9800M GT" },
    { 0x060C, 0x0000, 0x0000,  5,      "GeForce 8800M GTX" },
    { 0x060D, 0x0000, 0x0000,  5,      "GeForce 8800 GS" },
    { 0x060F, 0x0000, 0x0000,  5,      "GeForce GTX 285M" },
    { 0x0610, 0x0000, 0x0000,  5,      "GeForce 9600 GSO" },
    { 0x0612, 0x0000, 0x0000,  5,      "GeForce 9800 GTX/9800 GTX+" },
    { 0x0613, 0x0000, 0x0000,  5,      "GeForce 9800 GTX+" },
    { 0x0614, 0x0000, 0x0000,  5,      "GeForce 9800 GT" },
    { 0x0615, 0x0000, 0x0000,  5,      "GeForce GTS 250" },
    { 0x0617, 0x0000, 0x0000,  5,      "GeForce 9800M GTX" },
    { 0x061C, 0x0000, 0x0000,  5,      "Quadro FX 3600M" },
    { 0x061D, 0x0000, 0x0000,  5,      "Quadro FX 2800M" },
    { 0x061E, 0x0000, 0x0000,  5,      "Quadro FX 3700M" },
    { 0x061F, 0x0000, 0x0000,  5,      "Quadro FX 3800M" },
    { 0x0621, 0x0000, 0x0000,  5,      "GeForce GT 230" },
    { 0x0622, 0x0000, 0x0000,  5,      "GeForce 9600 GT" },
    { 0x0623, 0x0000, 0x0000,  5,      "GeForce 9600 GS" },
    { 0x0625, 0x0000, 0x0000,  5,      "GeForce 9600 GSO 512" },
    { 0x0626, 0x0000, 0x0000,  5,      "GeForce GT 130" },
    { 0x0627, 0x0000, 0x0000,  5,      "GeForce GT 140" },
    { 0x0628, 0x0000, 0x0000,  5,      "GeForce 9800M GTS" },
    { 0x062A, 0x0000, 0x0000,  5,      "GeForce 9700M GTS" },
    { 0x062B, 0x0000, 0x0000,  5,      "GeForce 9800M GS" },
    { 0x062C, 0x0000, 0x0000,  5,      "GeForce 9800M GTS" },
    { 0x062D, 0x0000, 0x0000,  5,      "GeForce 9600 GT" },
    { 0x062E, 0x0000, 0x0000,  5,      "GeForce 9600 GT" },
    { 0x062E, 0x106B, 0x0605,  5,      "GeForce GT 130" },
    { 0x0630, 0x0000, 0x0000,  5,      "GeForce 9700 S" },
    { 0x0631, 0x0000, 0x0000,  5,      "GeForce GTS 160M" },
    { 0x0632, 0x0000, 0x0000,  5,      "GeForce GTS 150M" },
    { 0x0635, 0x0000, 0x0000,  5,      "GeForce 9600 GSO" },
    { 0x0637, 0x0000, 0x0000,  5,      "GeForce 9600 GT" },
    { 0x0638, 0x0000, 0x0000,  5,      "Quadro FX 1800" },
    { 0x063A, 0x0000, 0x0000,  5,      "Quadro FX 2700M" },
    { 0x0640, 0x0000, 0x0000,  5,      "GeForce 9500 GT" },
    { 0x0641, 0x0000, 0x0000,  5,      "GeForce 9400 GT" },
    { 0x0643, 0x0000, 0x0000,  5,      "GeForce 9500 GT" },
    { 0x0644, 0x0000, 0x0000,  5,      "GeForce 9500 GS" },
    { 0x0645, 0x0000, 0x0000,  5,      "GeForce 9500 GS" },
    { 0x0646, 0x0000, 0x0000,  5,      "GeForce GT 120" },
    { 0x0647, 0x0000, 0x0000,  5,      "GeForce 9600M GT" },
    { 0x0648, 0x0000, 0x0000,  5,      "GeForce 9600M GS" },
    { 0x0649, 0x0000, 0x0000,  5,      "GeForce 9600M GT" },
    { 0x0649, 0x1043, 0x202D,  5,      "GeForce GT 220M" },
    { 0x064A, 0x0000, 0x0000,  5,      "GeForce 9700M GT" },
    { 0x064B, 0x0000, 0x0000,  5,      "GeForce 9500M G" },
    { 0x064C, 0x0000, 0x0000,  5,      "GeForce 9650M GT" },
    { 0x0651, 0x0000, 0x0000,  5,      "GeForce G 110M" },
    { 0x0652, 0x0000, 0x0000,  5,      "GeForce GT 130M" },
    { 0x0652, 0x152D, 0x0850,  5,      "GeForce GT 240M LE" },
    { 0x0653, 0x0000, 0x0000,  5,      "GeForce GT 120M" },
    { 0x0654, 0x0000, 0x0000,  5,      "GeForce GT 220M" },
    { 0x0654, 0x1043, 0x14A2,  5,      "GeForce GT 320M" },
    { 0x0654, 0x1043, 0x14D2,  5,      "GeForce GT 320M" },
    { 0x0655, 0x106B, 0x0633,  5,      "GeForce GT 120" },
    { 0x0656, 0x106B, 0x0693,  5,      "GeForce GT 120" },
    { 0x0658, 0x0000, 0x0000,  5,      "Quadro FX 380" },
    { 0x0659, 0x0000, 0x0000,  5,      "Quadro FX 580" },
    { 0x065A, 0x0000, 0x0000,  5,      "Quadro FX 1700M" },
    { 0x065B, 0x0000, 0x0000,  5,      "GeForce 9400 GT" },
    { 0x065C, 0x0000, 0x0000,  5,      "Quadro FX 770M" },
    { 0x06E5, 0x0000, 0x0000,  5,      "GeForce 9300M GS" },
    { 0x06E6, 0x0000, 0x0000,  5,      "GeForce G100" },
    { 0x06EC, 0x0000, 0x0000,  5,      "GeForce G 105M" },
    { 0x06EF, 0x0000, 0x0000,  5,      "GeForce G 103M" },
    { 0x06F1, 0x0000, 0x0000,  5,      "GeForce G105M" },
    { 0x06EB, 0x0000, 0x0000,  5,      "Quadro NVS 160M" },
    { 0x06EA, 0x0000, 0x0000,  5,      "Quadro NVS 150M" },
    { 0x06E9, 0x0000, 0x0000,  5,      "GeForce 9300M GS" },
    { 0x06E8, 0x0000, 0x0000,  5,      "GeForce 9200M GS" },
    { 0x06E8, 0x103C, 0x360B,  5,      "GeForce 9200M GE" },
    { 0x06F8, 0x0000, 0x0000,  5,      "Quadro NVS 420" },
    { 0x06F9, 0x0000, 0x0000,  5,      "Quadro FX 370 LP" },
    { 0x06F9, 0x10DE, 0x060D,  5,      "Quadro FX 370 Low Profile" },
    { 0x06FA, 0x0000, 0x0000,  5,      "Quadro NVS 450" },
    { 0x06FB, 0x0000, 0x0000,  5,      "Quadro FX 370M" },
    { 0x06FD, 0x0000, 0x0000,  5,      "Quadro NVS 295" },
    { 0x10C0, 0x0000, 0x0000,  5,      "GeForce 9300 GS" },
    { 0x10C3, 0x0000, 0x0000,  5,      "GeForce 8400GS" },
    { 0x10C5, 0x0000, 0x0000,  5,      "GeForce 405" },
    { 0x10D8, 0x0000, 0x0000,  5,      "NVS 300" },
    { 0x0FEF, 0x0000, 0x0000,  6,      "GRID K340" },
    { 0x0FF2, 0x0000, 0x0000,  6,      "GRID K1" },
    { 0x11BF, 0x0000, 0x0000,  6,      "GRID K2" }
};

#endif /* __NV_LEGACY_H */
