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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003831792564_4144471541_init();
    work_m_00000000002696177008_2601983858_init();
    work_m_00000000002403509481_2321183677_init();
    work_m_00000000002793862832_4258850420_init();
    work_m_00000000001926137161_1152422479_init();
    work_m_00000000000500814281_3190806320_init();
    work_m_00000000000500814281_1920252487_init();
    work_m_00000000003065592373_0967961054_init();
    work_m_00000000003065592373_4127409561_init();
    work_m_00000000001348388739_0254784918_init();
    work_m_00000000002557569226_0886308060_init();
    work_m_00000000003065592373_3000242182_init();
    work_m_00000000001704268913_3979377396_init();
    work_m_00000000000958006343_0991580968_init();
    work_m_00000000002628902553_3898124296_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002628902553_3898124296");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
