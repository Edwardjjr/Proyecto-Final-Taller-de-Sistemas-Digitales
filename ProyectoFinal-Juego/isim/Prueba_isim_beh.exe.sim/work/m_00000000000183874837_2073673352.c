/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "G:/ProyectoFinal-Juego/MaquinaJugador.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};



static void Always_47_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 4992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 6056);
    *((int *)t2) = 1;
    t3 = (t0 + 5024);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 4072);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3912);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(50, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3912);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    goto LAB8;

}

static void Always_55_1(char *t0)
{
    char t16[8];
    char t20[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;

LAB0:    t1 = (t0 + 5240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 6072);
    *((int *)t2) = 1;
    t3 = (t0 + 5272);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56, ng0);

LAB5:    xsi_set_current_line(58, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3592);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3752);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3432);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(64, ng0);

LAB9:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB10:    t5 = ((char*)((ng1)));
    t11 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t11 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng3)));
    t11 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t11 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t11 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t11 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t11 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t11 == 1)
        goto LAB17;

LAB18:
LAB20:
LAB19:    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4072);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB21:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(62, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 4072);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    goto LAB8;

LAB11:    xsi_set_current_line(67, ng0);

LAB22:    xsi_set_current_line(68, ng0);
    t12 = (t0 + 2072U);
    t13 = *((char **)t12);
    t12 = (t13 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4072);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB25:    goto LAB21;

LAB13:    xsi_set_current_line(75, ng0);

LAB27:    xsi_set_current_line(76, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 3432);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4072);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB21;

LAB15:    xsi_set_current_line(80, ng0);

LAB28:    xsi_set_current_line(81, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 3432);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2232U);
    t3 = *((char **)t2);
    memset(t16, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t2) != 0)
        goto LAB31;

LAB32:    t12 = (t16 + 4);
    t17 = *((unsigned int *)t16);
    t18 = *((unsigned int *)t12);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB33;

LAB34:    memcpy(t26, t16, 8);

LAB35:    t57 = (t26 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t26);
    t61 = (t60 & t59);
    t62 = (t61 != 0);
    if (t62 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(86, ng0);

LAB47:    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4072);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB45:    goto LAB21;

LAB17:    xsi_set_current_line(91, ng0);

LAB48:    xsi_set_current_line(92, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 3432);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 2392U);
    t3 = *((char **)t2);
    memset(t16, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t2) != 0)
        goto LAB51;

LAB52:    t12 = (t16 + 4);
    t17 = *((unsigned int *)t16);
    t18 = *((unsigned int *)t12);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB53;

LAB54:    memcpy(t26, t16, 8);

LAB55:    t57 = (t26 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t26);
    t61 = (t60 & t59);
    t62 = (t61 != 0);
    if (t62 > 0)
        goto LAB63;

LAB64:
LAB65:    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4072);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB21;

LAB23:    xsi_set_current_line(68, ng0);

LAB26:    xsi_set_current_line(69, ng0);
    t14 = ((char*)((ng3)));
    t15 = (t0 + 4072);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 2);
    goto LAB25;

LAB29:    *((unsigned int *)t16) = 1;
    goto LAB32;

LAB31:    t5 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB32;

LAB33:    t13 = (t0 + 2552U);
    t14 = *((char **)t13);
    memset(t20, 0, 8);
    t13 = (t14 + 4);
    t21 = *((unsigned int *)t13);
    t22 = (~(t21));
    t23 = *((unsigned int *)t14);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t13) != 0)
        goto LAB38;

LAB39:    t27 = *((unsigned int *)t16);
    t28 = *((unsigned int *)t20);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t30 = (t16 + 4);
    t31 = (t20 + 4);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB40;

LAB41:
LAB42:    goto LAB35;

LAB36:    *((unsigned int *)t20) = 1;
    goto LAB39;

LAB38:    t15 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB39;

LAB40:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    t40 = (t16 + 4);
    t41 = (t20 + 4);
    t42 = *((unsigned int *)t16);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t20);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (~(t48));
    t11 = (t43 & t45);
    t50 = (t47 & t49);
    t51 = (~(t11));
    t52 = (~(t50));
    t53 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t53 & t51);
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & t52);
    t55 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t55 & t51);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    goto LAB42;

LAB43:    xsi_set_current_line(82, ng0);

LAB46:    xsi_set_current_line(83, ng0);
    t63 = ((char*)((ng3)));
    t64 = (t0 + 3592);
    xsi_vlogvar_assign_value(t64, t63, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4072);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB45;

LAB49:    *((unsigned int *)t16) = 1;
    goto LAB52;

LAB51:    t5 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB52;

LAB53:    t13 = (t0 + 2712U);
    t14 = *((char **)t13);
    memset(t20, 0, 8);
    t13 = (t14 + 4);
    t21 = *((unsigned int *)t13);
    t22 = (~(t21));
    t23 = *((unsigned int *)t14);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t13) != 0)
        goto LAB58;

LAB59:    t27 = *((unsigned int *)t16);
    t28 = *((unsigned int *)t20);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t30 = (t16 + 4);
    t31 = (t20 + 4);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB60;

LAB61:
LAB62:    goto LAB55;

LAB56:    *((unsigned int *)t20) = 1;
    goto LAB59;

LAB58:    t15 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB59;

LAB60:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    t40 = (t16 + 4);
    t41 = (t20 + 4);
    t42 = *((unsigned int *)t16);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t20);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (~(t48));
    t11 = (t43 & t45);
    t50 = (t47 & t49);
    t51 = (~(t11));
    t52 = (~(t50));
    t53 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t53 & t51);
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & t52);
    t55 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t55 & t51);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    goto LAB62;

LAB63:    xsi_set_current_line(93, ng0);

LAB66:    xsi_set_current_line(94, ng0);
    t63 = ((char*)((ng3)));
    t64 = (t0 + 3752);
    xsi_vlogvar_assign_value(t64, t63, 0, 0, 1);
    goto LAB65;

}

static void Cont_104_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3592);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6184);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 6088);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_105_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 3752);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 6104);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000000183874837_2073673352_init()
{
	static char *pe[] = {(void *)Always_47_0,(void *)Always_55_1,(void *)Cont_104_2,(void *)Cont_105_3};
	xsi_register_didat("work_m_00000000000183874837_2073673352", "isim/Prueba_isim_beh.exe.sim/work/m_00000000000183874837_2073673352.didat");
	xsi_register_executes(pe);
}
