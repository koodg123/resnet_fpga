#include "bn8_a_b.h"
short * bn8_a_b( short in[BN8_A_B_FILT] ) {
in[0] = (short)(((5*((int)in[0]))+1189) >> 18);
in[0] = in[0] * ( in[0] > 0 );
in[1] = (short)(((4*((int)in[1]))+-4186) >> 18);
in[1] = in[1] * ( in[1] > 0 );
in[2] = (short)(((5*((int)in[2]))+-1087) >> 18);
in[2] = in[2] * ( in[2] > 0 );
in[3] = (short)(((6*((int)in[3]))+-9634) >> 18);
in[3] = in[3] * ( in[3] > 0 );
in[4] = (short)(((6*((int)in[4]))+-2115) >> 18);
in[4] = in[4] * ( in[4] > 0 );
in[5] = (short)(((5*((int)in[5]))+-1537) >> 18);
in[5] = in[5] * ( in[5] > 0 );
in[6] = (short)(((5*((int)in[6]))+-5801) >> 18);
in[6] = in[6] * ( in[6] > 0 );
in[7] = (short)(((6*((int)in[7]))+-7802) >> 18);
in[7] = in[7] * ( in[7] > 0 );
in[8] = (short)(((7*((int)in[8]))+-7808) >> 18);
in[8] = in[8] * ( in[8] > 0 );
in[9] = (short)(((7*((int)in[9]))+-16726) >> 18);
in[9] = in[9] * ( in[9] > 0 );
in[10] = (short)(((6*((int)in[10]))+-2457) >> 18);
in[10] = in[10] * ( in[10] > 0 );
in[11] = (short)(((5*((int)in[11]))+-8618) >> 18);
in[11] = in[11] * ( in[11] > 0 );
in[12] = (short)(((4*((int)in[12]))+-2677) >> 18);
in[12] = in[12] * ( in[12] > 0 );
in[13] = (short)(((4*((int)in[13]))+-7530) >> 18);
in[13] = in[13] * ( in[13] > 0 );
in[14] = (short)(((5*((int)in[14]))+-2134) >> 18);
in[14] = in[14] * ( in[14] > 0 );
in[15] = (short)(((7*((int)in[15]))+-7548) >> 18);
in[15] = in[15] * ( in[15] > 0 );
in[16] = (short)(((6*((int)in[16]))+421) >> 18);
in[16] = in[16] * ( in[16] > 0 );
in[17] = (short)(((5*((int)in[17]))+-1265) >> 18);
in[17] = in[17] * ( in[17] > 0 );
in[18] = (short)(((6*((int)in[18]))+-3209) >> 18);
in[18] = in[18] * ( in[18] > 0 );
in[19] = (short)(((5*((int)in[19]))+-5367) >> 18);
in[19] = in[19] * ( in[19] > 0 );
in[20] = (short)(((6*((int)in[20]))+-6447) >> 18);
in[20] = in[20] * ( in[20] > 0 );
in[21] = (short)(((5*((int)in[21]))+-6355) >> 18);
in[21] = in[21] * ( in[21] > 0 );
in[22] = (short)(((4*((int)in[22]))+-2554) >> 18);
in[22] = in[22] * ( in[22] > 0 );
in[23] = (short)(((5*((int)in[23]))+-13397) >> 18);
in[23] = in[23] * ( in[23] > 0 );
in[24] = (short)(((5*((int)in[24]))+-3983) >> 18);
in[24] = in[24] * ( in[24] > 0 );
in[25] = (short)(((6*((int)in[25]))+-3341) >> 18);
in[25] = in[25] * ( in[25] > 0 );
in[26] = (short)(((5*((int)in[26]))+431) >> 18);
in[26] = in[26] * ( in[26] > 0 );
in[27] = (short)(((5*((int)in[27]))+-5608) >> 18);
in[27] = in[27] * ( in[27] > 0 );
in[28] = (short)(((5*((int)in[28]))+-9096) >> 18);
in[28] = in[28] * ( in[28] > 0 );
in[29] = (short)(((6*((int)in[29]))+-5186) >> 18);
in[29] = in[29] * ( in[29] > 0 );
in[30] = (short)(((5*((int)in[30]))+-4143) >> 18);
in[30] = in[30] * ( in[30] > 0 );
in[31] = (short)(((5*((int)in[31]))+-1251) >> 18);
in[31] = in[31] * ( in[31] > 0 );
in[32] = (short)(((4*((int)in[32]))+-7215) >> 18);
in[32] = in[32] * ( in[32] > 0 );
in[33] = (short)(((7*((int)in[33]))+-3395) >> 18);
in[33] = in[33] * ( in[33] > 0 );
in[34] = (short)(((6*((int)in[34]))+-2510) >> 18);
in[34] = in[34] * ( in[34] > 0 );
in[35] = (short)(((5*((int)in[35]))+-1581) >> 18);
in[35] = in[35] * ( in[35] > 0 );
in[36] = (short)(((5*((int)in[36]))+-1421) >> 18);
in[36] = in[36] * ( in[36] > 0 );
in[37] = (short)(((4*((int)in[37]))+-3125) >> 18);
in[37] = in[37] * ( in[37] > 0 );
in[38] = (short)(((4*((int)in[38]))+-2748) >> 18);
in[38] = in[38] * ( in[38] > 0 );
in[39] = (short)(((4*((int)in[39]))+-358) >> 18);
in[39] = in[39] * ( in[39] > 0 );
in[40] = (short)(((6*((int)in[40]))+-7056) >> 18);
in[40] = in[40] * ( in[40] > 0 );
in[41] = (short)(((6*((int)in[41]))+-6278) >> 18);
in[41] = in[41] * ( in[41] > 0 );
in[42] = (short)(((6*((int)in[42]))+-3345) >> 18);
in[42] = in[42] * ( in[42] > 0 );
in[43] = (short)(((6*((int)in[43]))+-924) >> 18);
in[43] = in[43] * ( in[43] > 0 );
in[44] = (short)(((4*((int)in[44]))+-5018) >> 18);
in[44] = in[44] * ( in[44] > 0 );
in[45] = (short)(((5*((int)in[45]))+1209) >> 18);
in[45] = in[45] * ( in[45] > 0 );
in[46] = (short)(((4*((int)in[46]))+-6686) >> 18);
in[46] = in[46] * ( in[46] > 0 );
in[47] = (short)(((5*((int)in[47]))+-4015) >> 18);
in[47] = in[47] * ( in[47] > 0 );
in[48] = (short)(((3*((int)in[48]))+-4099) >> 18);
in[48] = in[48] * ( in[48] > 0 );
in[49] = (short)(((6*((int)in[49]))+-5579) >> 18);
in[49] = in[49] * ( in[49] > 0 );
in[50] = (short)(((6*((int)in[50]))+-4856) >> 18);
in[50] = in[50] * ( in[50] > 0 );
in[51] = (short)(((5*((int)in[51]))+-1775) >> 18);
in[51] = in[51] * ( in[51] > 0 );
in[52] = (short)(((4*((int)in[52]))+-8348) >> 18);
in[52] = in[52] * ( in[52] > 0 );
in[53] = (short)(((5*((int)in[53]))+-3528) >> 18);
in[53] = in[53] * ( in[53] > 0 );
in[54] = (short)(((3*((int)in[54]))+-2467) >> 18);
in[54] = in[54] * ( in[54] > 0 );
in[55] = (short)(((6*((int)in[55]))+-4881) >> 18);
in[55] = in[55] * ( in[55] > 0 );
in[56] = (short)(((7*((int)in[56]))+-3363) >> 18);
in[56] = in[56] * ( in[56] > 0 );
in[57] = (short)(((4*((int)in[57]))+-6039) >> 18);
in[57] = in[57] * ( in[57] > 0 );
in[58] = (short)(((6*((int)in[58]))+-2418) >> 18);
in[58] = in[58] * ( in[58] > 0 );
in[59] = (short)(((5*((int)in[59]))+-7166) >> 18);
in[59] = in[59] * ( in[59] > 0 );
in[60] = (short)(((7*((int)in[60]))+1709) >> 18);
in[60] = in[60] * ( in[60] > 0 );
in[61] = (short)(((4*((int)in[61]))+-4294) >> 18);
in[61] = in[61] * ( in[61] > 0 );
in[62] = (short)(((4*((int)in[62]))+-341) >> 18);
in[62] = in[62] * ( in[62] > 0 );
in[63] = (short)(((5*((int)in[63]))+-8538) >> 18);
in[63] = in[63] * ( in[63] > 0 );
return in;
}
