#include "conv1.h"
short * conv1( const short in[CONV1_IN], short out[CONV1_OUT] ) {
short in_6 = in[0] + in[2];
short in_7 = in[4];
short in_8 = in_6 + in_7;
short in_9 = in[0] + in[2];
short in_10 = in[4];
short in_11 = in_9 + in_10;
short in_12 = in[0] - in[4];
short in_13 = in[2] + in[4];
short in_14 = in[5];
short in_15 = in_13 + in_14;
short in_16 = in[1] - in[5];
short in_17 = in[3] - in[4];
short in_18 = in[0] + in[2];
short in_19 = in_12 + in_16;
short in_20 = in[0] + in[2];
short in_21 = in[3] + in[4];
short in_22 = in[5];
short in_23 = in_21 + in_22;
short in_24 = in[5];
short in_25 = in_24 + in_12;
short in_26 = in[1] + in[3];
short in_27 = in[5];
short in_28 = in_27 + in_12;
short in_29 = in_12;
short in_30 = in_16;
short in_31 = in[4];
short in_32 = in_31 - in_16;
short in_33 = in[0] + in[2];
short in_34 = in_33 + in_16;
short in_35 = in[1] + in[3];
short in_36 = in[5];
short in_37 = in_35 + in_36;
short in_38 = in[0] + in[4];
short in_39 = in[1] + in[3];
short in_40 = in[1] - in[2];
short in_41 = in[5];
short in_42 = in_41 + in_12;
short in_43 = in[3] + in[5];
short in_44 = in[1] + in[3];
short in_45 = in_12 + in_16;
short in_46 = in[0] + in[1];
short in_47 = in[2] + in[3];
short in_48 = in_46 + in_47;
short in_49 = in_40 - in_17;
short in_50 = in[1];
short in_51 = in[0] + in[2];
short in_52 = in[4];
short in_53 = in_51 + in_52;
short in_54 = in[1] + in[3];
short in_55 = in[1] + in[2];
short in_56 = in[3];
short in_57 = in_55 + in_56;
short in_58 = in[4] - in[5];
short in_59 = in[5];
short in_60 = in_12;
short in_61 = in[1] + in[3];
short in_62 = in[5];
short in_63 = in[0] - in[5];
short in_64 = in[3] + in[5];
short in_65 = in[0];
short in_66 = in_65 - in_16;
short in_67 = in[0] + in[2];
short in_68 = -in_67 + in_17;
short in_69 = in[0];
short in_70 = in[0] - in[3];
short in_71 = in_70 - in_40;
short in_72 = in[1];
short in_73 = in[0] + in[2];
short in_74 = in[0];
short in_75 = in_16;
short in_76 = in[4];
short in_77 = in[1];
short in_78 = in[1] + in[5];
short in_79 = in[1] + in[3];
short in_80 = in[5];
short in_81 = in_79 + in_80;
short in_82 = in[2] + in[4];
short in_83 = in[2] + in[4];
short in_84 = in_32;
short in_85 = in[0] + in[2];
short in_86 = in[1] + in[3];
short in_87 = in_58;
short in_88 = in[0] + in[2];
short in_89 = in_63;
short in_90 = in[0];
short in_91 = in[5];
short in_92 = in_91 - in_12;
short in_93 = in_12 - in_16;
short in_94 = in[1];
short in_95 = in_94 + in_17;
short in_96 = in[3];
short in_97 = in_96;
short in_98 = in_97 + in_92;
short in_99 = in_32;
short in_100 = in[3];
short in_101 = in_100;
short in_102 = in_101 + in_92;
short in_103 = in[4];
short in_104 = in_103 - in_40;
short in_105 = in_93;
short in_106 = in[2];
short in_107 = in_106 + in_58;
short in_108 = in_93;
short in_109 = in[2];
short in_110 = in_109 + in_63;
short in_111 = in_92;
short in_112 = in_93;
short in_113 = -in_15;
short in_114 = -in_19;
short in_115 = -in_20;
short in_116 = -in_28;
short in_117 = -in_30;
short in_118 = -in_34;
short in_119 = -in_37;
short in_120 = -in_39;
short in_121 = -in_42;
short in_122 = -in_43;
short in_123 = -in_44;
short in_124 = -in_48;
short in_125 = -in_53;
short in_126 = -in_54;
short in_127 = -in_60;
short in_128 = -in_61;
short in_129 = -in_64;
short in_130 = -in_74;
short in_131 = -in_76;
short in_132 = -in_77;
short in_133 = -in_82;
short in_134 = -in_83;
short in_135 = -in_84;
short in_136 = -in_86;
short in_137 = -in_87;
short in_138 = -in_88;
short in_139 = -in_89;
short in_140 = -in_98;
short in_141 = -in_105;
short in_142 = -in_111;
short in_143 = -in_112;
out[0] = in_8;
out[1] = in_11;
out[2] = in_142;
out[3] = in_113;
out[4] = in_143;
out[5] = in_95;
out[6] = in_18;
out[7] = in_114;
out[8] = in_140;
out[9] = in_115;
out[10] = in_23;
out[11] = in_25;
out[12] = in_26;
out[13] = in_116;
out[14] = in_29;
out[15] = in_117;
out[16] = in_99;
out[17] = in_118;
out[18] = in_119;
out[19] = in_102;
out[20] = in_38;
out[21] = in_120;
out[22] = in_104;
out[23] = in_121;
out[24] = in_141;
out[25] = in_122;
out[26] = in_123;
out[27] = in_45;
out[28] = in_124;
out[29] = in_49;
out[30] = in_50;
out[31] = in_125;
out[32] = in_126;
out[33] = in_57;
out[34] = in_107;
out[35] = in_59;
out[36] = in_127;
out[37] = in_128;
out[38] = in_62;
out[39] = in_108;
out[40] = in_110;
out[41] = in_129;
out[42] = in_66;
out[43] = in_68;
out[44] = in_69;
out[45] = in_71;
out[46] = in_72;
out[47] = in_73;
out[48] = in_130;
out[49] = in_75;
out[50] = in_131;
out[51] = in_132;
out[52] = in_78;
out[53] = in_81;
out[54] = in_133;
out[55] = 0;
out[56] = in_134;
out[57] = in_135;
out[58] = in_85;
out[59] = in_136;
out[60] = in_137;
out[61] = in_138;
out[62] = in_139;
out[63] = in_90;
return out;
}