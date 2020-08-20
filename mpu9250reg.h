#ifndef MPU9250_REG_MAP_H_
#define MPU9250_REG_MAP_H_

// MPU-9250 register map
// Autor: Petr Hric

#define MPU9250_SELF_TEST_X_GYRO                     0x00 // | 0   | R/W | xg_st_data [7:0]
#define MPU9250_SELF_TEST_Y_GYRO                     0x01 // | 1   | R/W | yg_st_data [7:0]
#define MPU9250_SELF_TEST_Z_GYRO                     0x02 // | 2   | R/W | zg_st_data [7:0]
#define MPU9250_SELF_TEST_X_ACCEL                    0x0D // | 13  | R/W | XA_ST_DATA [7:0]
#define MPU9250_SELF_TEST_Y_ACCEL                    0x0E // | 14  | R/W | YA_ST_DATA [7:0]
#define MPU9250_SELF_TEST_Z_ACCEL                    0x0F // | 15  | R/W | ZA_ST_DATA [7:0]
#define MPU9250_XG_OFFSET_H                          0x13 // | 19  | R/W | X_OFFS_USR [15:8]
#define MPU9250_XG_OFFSET_L                          0x14 // | 20  | R/W | X_OFFS_USR [7:0]
#define MPU9250_YG_OFFSET_H                          0x15 // | 21  | R/W | Y_OFFS_USR [15:8]
#define MPU9250_YG_OFFSET_L                          0x16 // | 22  | R/W | Y_OFFS_USR [7:0]
#define MPU9250_ZG_OFFSET_H                          0x17 // | 23  | R/W | Z_OFFS_USR [15:8]
#define MPU9250_ZG_OFFSET_L                          0x18 // | 24  | R/W | Z_OFFS_USR [7:0]
#define MPU9250_SMPLRT_DIV                           0x19 // | 25  | R/W | SMPLRT_DIV[7:0]

#define MPU9250_CONFIG                               0x1A // | 26  | R/W | - FIFO_MODE EXT_SYNC_SET[2:0] DLPF_CFG[2:0]
#define MPU9250_CONFIG_FIFO_MODE                     6
#define MPU9250_CONFIG_EXT_SYNC_SET                  5 // 3 bits
#define MPU9250_CONFIG_DLPF_CFG                      2 // 3 bits

#define MPU9250_GYRO_CONFIG                          0x1B // | 27  | R/W | XGYRO_Cten YGYRO_Cten ZGYRO_Cten GYRO_FS_SEL [1:0] - FCHOICE_B[1:0]
#define MPU9250_GYRO_CONFIG_XGYRO_CTEN               7
#define MPU9250_GYRO_CONFIG_YGYRO_CTEN               6
#define MPU9250_GYRO_CONFIG_ZGYRO_CTEN               5
#define MPU9250_GYRO_CONFIG_GYRO_FS_SEL              4 // 2 bits
#define MPU9250_GYRO_CONFIG_FCHOICE_B                1

#define MPU9250_ACCEL_CONFIG                         0x1C // | 28  | R/W | ax_st_en ay_st_en az_st_en ACCEL_FS_SEL[1:0] -
#define MPU9250_ACCEL_CONFIG_AX_ST_EN                7
#define MPU9250_ACCEL_CONFIG_AY_ST_EN                5
#define MPU9250_ACCEL_CONFIG_AZ_ST_EN                4
#define MPU9250_ACCEL_CONFIG_ACCEL_FS_SEL            4 // 2 bits

#define MPU9250_ACCEL_CONFIG_2                       0x1D // | 29  | R/W | - ACCEL_FCHOICE_B A_DLPF_CFG
#define MPU9250_ACCEL_CONFIG_2_ACCEL_FCHOICE_B       3 // 2 bits
#define MPU9250_ACCEL_CONFIG_2_ACCEL_A_DLPF_CFG      1 // 2 bits

#define MPU9250_LP_ACCEL_ODR                         0x1E // | 30  | R/W | - Lposc_clksel [3:0]
#define MPU9250_LP_ACCEL_ODR_LPOSC_CLKSEL            3 // 4 bits

#define MPU9250_WOM_THR                              0x1F // | 31  | R/W | WOM_Threshold [7:0]

#define MPU9250_FIFO_EN                              0x23 // | 35  | R/W | TEMP_FIFO_EN GYRO_XOUT GYRO_YOUT GYRO_ZOUT ACCEL SLV2 SLV1 SLV0
#define MPU9250_FIFO_EN_TEMP_FIFO_EN                 7
#define MPU9250_FIFO_EN_GYRO_XOUT                    6
#define MPU9250_FIFO_EN_GYRO_YOUT                    5
#define MPU9250_FIFO_EN_GYRO_ZOUT                    4
#define MPU9250_FIFO_EN_ACCEL                        3
#define MPU9250_FIFO_EN_SLV2                         2
#define MPU9250_FIFO_EN_SLV1                         1
#define MPU9250_FIFO_EN_SLV                          0

#define MPU9250_I2C_MST_CTRL                         0x24 // | 36  | R/W | MULT_MST_EN WAIT_FOR_ES SLV_3_FIFO_EN I2C_MST_P_NSR I2C_MST_CLK[3:0]
#define MPU9250_I2C_MST_CTRL_MULT_MST_EN             7
#define MPU9250_I2C_MST_CTRL_WAIT_FOR_ES             6
#define MPU9250_I2C_MST_CTRL_SLV3_FIFO_EN            5
#define MPU9250_I2C_MST_CTRL_I2C_MST_P_NSR           4
#define MPU9250_I2C_MST_CTRL_I2C_MST_CLK             3 // 4 bits

#define MPU9250_I2C_SLV0_ADDR                        0x25 // | 37  | R/W | I2C_SLV0_RNW I2C_ID_0 [6:0]
#define MPU9250_I2C_SLV0_ADDR_I2C_SLV0_RNW           7
#define MPU9250_I2C_SLV0_ADDR_I2C_ID0                6 // 7 bits

#define MPU9250_I2C_SLV0_REG                         0x26 // | 38  | R/W | I2C_SLV0_REG[7:0]

#define MPU9250_I2C_SLV0_CTRL                        0x27 // | 39  | R/W | I2C_SLV0_EN I2C_SLV0_BYTE_SW I2C_SLV0_REG_DIS I2C_SLV0_GRP I2C_SLV0_LENG[3:0]
#define MPU9250_I2C_SLV0_CTRL_I2C_SLV0_EN            7
#define MPU9250_I2C_SLV0_CTRL_I2C_SLV0_BYTE_SW       6
#define MPU9250_I2C_SLV0_CTRL_I2C_SLV0_REG_DIS       5
#define MPU9250_I2C_SLV0_CTRL_I2C_SLV0_GRP           4
#define MPU9250_I2C_SLV0_CTRL_I2C_MST_CLK            3 // 4 bits

#define MPU9250_I2C_SLV1_ADDR                        0x28 // | 40  | R/W | I2C_SLV1_RNW I2C_ID_1 [6:0]
#define MPU9250_I2C_SLV1_ADDR_I2C_SLV1_RNW           7
#define MPU9250_I2C_SLV1_ADDR_I2C_ID1                6 // 7 bits

#define MPU9250_I2C_SLV1_REG                         0x29 // | 41  | R/W | I2C_SLV1_REG[7:0]

#define MPU9250_I2C_SLV1_CTRL                        0x2A // | 42  | R/W | I2C_SLV1_EN I2C_SLV1_BYTE_SW I2C_SLV1_REG_DIS I2C_SLV1_GRP I2C_SLV1_LENG[3:0]
#define MPU9250_I2C_SLV1_CTRL_I2C_SLV1_EN            7
#define MPU9250_I2C_SLV1_CTRL_I2C_SLV1_BYTE_SW       6
#define MPU9250_I2C_SLV1_CTRL_I2C_SLV1_REG_DIS       5
#define MPU9250_I2C_SLV1_CTRL_I2C_SLV1_GRP           4
#define MPU9250_I2C_SLV1_CTRL_I2C_MST_CLK            3 // 4 bits

#define MPU9250_I2C_SLV2_ADDR                        0x2B // | 43  | R/W | I2C_SLV2_RNW I2C_ID_2 [6:0]
#define MPU9250_I2C_SLV2_ADDR_I2C_SLV2_RNW           7
#define MPU9250_I2C_SLV2_ADDR_I2C_ID2                6 // 7 bits

#define MPU9250_I2C_SLV2_REG                         0x2C // | 44  | R/W | I2C_SLV2_REG[7:0]

#define MPU9250_I2C_SLV2_CTRL                        0x2D // | 45  | R/W | I2C_SLV2_EN I2C_SLV2_BYTE_SW I2C_SLV2_REG_DIS I2C_SLV2_GRP I2C_SLV2_LENG[3:0]
#define MPU9250_I2C_SLV2_CTRL_I2C_SLV2_EN            7
#define MPU9250_I2C_SLV2_CTRL_I2C_SLV2_BYTE_SW       6
#define MPU9250_I2C_SLV2_CTRL_I2C_SLV2_REG_DIS       5
#define MPU9250_I2C_SLV2_CTRL_I2C_SLV2_GRP           4
#define MPU9250_I2C_SLV2_CTRL_I2C_MST_CLK            3 // 4 bits

#define MPU9250_I2C_SLV3_ADDR                        0x2E // | 46  | R/W | I2C_SLV3_RNW I2C_ID_3 [6:0]
#define MPU9250_I2C_SLV3_ADDR_I2C_SLV3_RNW           7
#define MPU9250_I2C_SLV3_ADDR_I2C_ID3                6 // 7 bits

#define MPU9250_I2C_SLV3_REG                         0x2F // | 47  | R/W | I2C_SLV3_REG[7:0]

#define MPU9250_I2C_SLV3_CTRL                        0x30 // | 48  | R/W | I2C_SLV3_EN I2C_SLV3_BYTE_SW I2C_SLV3_REG_DIS I2C_SLV3_GRP I2C_SLV3_LENG [3:0]
#define MPU9250_I2C_SLV3_CTRL_I2C_SLV3_EN            7
#define MPU9250_I2C_SLV3_CTRL_I2C_SLV3_BYTE_SW       6
#define MPU9250_I2C_SLV3_CTRL_I2C_SLV3_REG_DIS       5
#define MPU9250_I2C_SLV3_CTRL_I2C_SLV3_GRP           4
#define MPU9250_I2C_SLV3_CTRL_I2C_MST_CLK            3 // 4 bits

#define MPU9250_I2C_SLV4_ADDR                        0x31 // | 49  | R/W | I2C_SLV4_RNW I2C_ID_4 [6:0]
#define MPU9250_I2C_SLV4_ADDR_I2C_SLV4_RNW           7
#define MPU9250_I2C_SLV4_ADDR_I2C_ID4                6 // 7 bits

#define MPU9250_I2C_SLV4_REG                         0x32 // | 50  | R/W | I2C_SLV4_REG[7:0]
#define MPU9250_I2C_SLV4_DO                          0x33 // | 51  | R/W | I2C_SLV4_DO[7:0]

#define MPU9250_I2C_SLV4_CTRL                        0x34 // | 52  | R/W | I2C_SLV4_EN SLV4_DONE_INT_EN I2C_SLV4_REG_DIS I2C_MST_DLY[4:0]
#define MPU9250_I2C_SLV4_CTRL_I2C_SLV4_EN            7
#define MPU9250_I2C_SLV4_CTRL_I2C_SLV4_DONE_INT_EN   6
#define MPU9250_I2C_SLV4_CTRL_I2C_SLV4_REG_DIS       5
#define MPU9250_I2C_SLV4_CTRL_I2C_MST_DLY            4 // 5 bits

#define MPU9250_I2C_SLV4_DI                          0x35 // | 53  | R   | I2C_SLV4_DI[7:0]

#define MPU9250_I2C_MST_STATUS                       0x36 // | 54  | R   | PASS_THROUGH I2C_SLV4_DONE I2C_LOST_ARB I2C_SLV4_NACK I2C_SLV3_NACK I2C_SLV2_NACK I2C_SLV1_NACK I2C_SLV0_NACK
#define MPU9250_I2C_MST_STATUS_PASS_THROUGH          7
#define MPU9250_I2C_MST_STATUS_I2C_SLV4_DONE         6
#define MPU9250_I2C_MST_STATUS_I2C_LOST_ARB          5
#define MPU9250_I2C_MST_STATUS_I2C_SLV4_NACK         4
#define MPU9250_I2C_MST_STATUS_I2C_SLV3_NACK         3
#define MPU9250_I2C_MST_STATUS_I2C_SLV2_NACK         2
#define MPU9250_I2C_MST_STATUS_I2C_SLV1_NACK         1
#define MPU9250_I2C_MST_STATUS_I2C_SLV0_NACK         0

#define MPU9250_INT_PIN_CFG                          0x37 // | 55  | R/W | ACTL OPEN LATCH_INT_EN INT_ANYRD_2CLEAR ACTL_FSYNC FSYNC_INT_MOD E_EN BYPASS_EN -
#define MPU9250_INT_PIN_CFG_ACTL                     7
#define MPU9250_INT_PIN_CFG_OPEN                     6
#define MPU9250_INT_PIN_CFG_LATCH_INT_EN             5
#define MPU9250_INT_PIN_CFG_INT_ANYRD_2CLEAR         4
#define MPU9250_INT_PIN_CFG_ACTL_FSYNC               3
#define MPU9250_INT_PIN_CFG_FSYNC_INT_MODE_EN        2
#define MPU9250_INT_PIN_CFG_BYPASS_EN                1

#define MPU9250_INT_ENABLE                           0x38 // | 56  | R/W | - WOM_EN - FIFO_OFLOW_EN FSYNC_INT_EN - - RAW_RDY_EN
#define MPU9250_INT_ENABLE_WOM_EN                    6
#define MPU9250_INT_ENABLE_FIFO_OFLOW_EN             4
#define MPU9250_INT_ENABLE_FSYNC_INT_EN              3
#define MPU9250_INT_ENABLE_RAW_RDY_EN                0

#define MPU9250_INT_STATUS                           0x3A // | 58  | R   | - WOM_INT - FIFO_OFLOW_INT FSYNC_INT - - RAW_DATA_RDY_INT
#define MPU9250_INT_STATUS_WOM_INT                   6
#define MPU9250_INT_STATUS_FIFO_OFLOW_INT            4
#define MPU9250_INT_STATUS_FSYNC_INT                 3
#define MPU9250_INT_STATUS_RAW_RDY_INT               0

#define MPU9250_ACCEL_XOUT_H                         0x3B // | 59  | R   | ACCEL_XOUT_H[15:8]
#define MPU9250_ACCEL_XOUT_L                         0x3C // | 60  | R   | ACCEL_XOUT_L[7:0]
#define MPU9250_ACCEL_YOUT_H                         0x3D // | 61  | R   | ACCEL_YOUT_H[15:8]
#define MPU9250_ACCEL_YOUT_L                         0x3E // | 62  | R   | ACCEL_YOUT_L[7:0]
#define MPU9250_ACCEL_ZOUT_H                         0x3F // | 63  | R   | ACCEL_ZOUT_H[15:8]
#define MPU9250_ACCEL_ZOUT_L                         0x40 // | 64  | R   | ACCEL_ZOUT_L[7:0]
#define MPU9250_TEMP_OUT_H                           0x41 // | 65  | R   | TEMP_OUT_H[15:8]
#define MPU9250_TEMP_OUT_L                           0x42 // | 66  | R   | TEMP_OUT_L[7:0]
#define MPU9250_GYRO_XOUT_H                          0x43 // | 67  | R   | GYRO_XOUT_H[15:8]
#define MPU9250_GYRO_XOUT_L                          0x44 // | 68  | R   | GYRO_XOUT_L[7:0]
#define MPU9250_GYRO_YOUT_H                          0x45 // | 69  | R   | GYRO_YOUT_H[15:8]
#define MPU9250_GYRO_YOUT_L                          0x46 // | 70  | R   | GYRO_YOUT_L[7:0]
#define MPU9250_GYRO_ZOUT_H                          0x47 // | 71  | R   | GYRO_ZOUT_H[15:8]
#define MPU9250_GYRO_ZOUT_L                          0x48 // | 72  | R   | GYRO_ZOUT_L[7:0]
#define MPU9250_EXT_SENS_DATA_00                     0x49 // | 73  | R   | EXT_SENS_DATA_00[7:0]
#define MPU9250_EXT_SENS_DATA_01                     0x4A // | 74  | R   | EXT_SENS_DATA_01[7:0]
#define MPU9250_EXT_SENS_DATA_02                     0x4B // | 75  | R   | EXT_SENS_DATA_02[7:0]
#define MPU9250_EXT_SENS_DATA_03                     0x4C // | 76  | R   | EXT_SENS_DATA_03[7:0]
#define MPU9250_EXT_SENS_DATA_04                     0x4D // | 77  | R   | EXT_SENS_DATA_04[7:0]
#define MPU9250_EXT_SENS_DATA_05                     0x4E // | 78  | R   | EXT_SENS_DATA_05[7:0]
#define MPU9250_EXT_SENS_DATA_06                     0x4F // | 79  | R   | EXT_SENS_DATA_06[7:0]
#define MPU9250_EXT_SENS_DATA_07                     0x50 // | 80  | R   | EXT_SENS_DATA_07[7:0]
#define MPU9250_EXT_SENS_DATA_08                     0x51 // | 81  | R   | EXT_SENS_DATA_08[7:0]
#define MPU9250_EXT_SENS_DATA_09                     0x52 // | 82  | R   | EXT_SENS_DATA_09[7:0]
#define MPU9250_EXT_SENS_DATA_10                     0x53 // | 83  | R   | EXT_SENS_DATA_10[7:0]
#define MPU9250_EXT_SENS_DATA_11                     0x54 // | 84  | R   | EXT_SENS_DATA_11[7:0]
#define MPU9250_EXT_SENS_DATA_12                     0x55 // | 85  | R   | EXT_SENS_DATA_12[7:0]
#define MPU9250_EXT_SENS_DATA_13                     0x56 // | 86  | R   | EXT_SENS_DATA_13[7:0]
#define MPU9250_EXT_SENS_DATA_14                     0x57 // | 87  | R   | EXT_SENS_DATA_14[7:0]
#define MPU9250_EXT_SENS_DATA_15                     0x58 // | 88  | R   | EXT_SENS_DATA_15[7:0]
#define MPU9250_EXT_SENS_DATA_16                     0x59 // | 89  | R   | EXT_SENS_DATA_16[7:0]
#define MPU9250_EXT_SENS_DATA_17                     0x5A // | 90  | R   | EXT_SENS_DATA_17[7:0]
#define MPU9250_EXT_SENS_DATA_18                     0x5B // | 91  | R   | EXT_SENS_DATA_18[7:0]
#define MPU9250_EXT_SENS_DATA_19                     0x5C // | 92  | R   | EXT_SENS_DATA_19[7:0]
#define MPU9250_EXT_SENS_DATA_20                     0x5D // | 93  | R   | EXT_SENS_DATA_20[7:0]
#define MPU9250_EXT_SENS_DATA_21                     0x5E // | 94  | R   | EXT_SENS_DATA_21[7:0]
#define MPU9250_EXT_SENS_DATA_22                     0x5F // | 95  | R   | EXT_SENS_DATA_22[7:0]
#define MPU9250_EXT_SENS_DATA_23                     0x60 // | 96  | R   | EXT_SENS_DATA_23[7:0]
#define MPU9250_I2C_SLV0_DO                          0x63 // | 99  | R/W | I2C_SLV0_DO[7:0]
#define MPU9250_I2C_SLV1_DO                          0x64 // | 100 | R/W | I2C_SLV1_DO[7:0]
#define MPU9250_I2C_SLV2_DO                          0x65 // | 101 | R/W | I2C_SLV2_DO[7:0]
#define MPU9250_I2C_SLV3_DO                          0x66 // | 102 | R/W | I2C_SLV3_DO[7:0]

#define MPU9250_I2C_MST_DELAY_CTRL                   0x67 // | 103 | R/W | DELAY_ES_SHADOW - - I2C_SLV4_DLY_EN I2C_SLV3_DLY_EN I2C_SLV2_DLY_EN I2C_SLV1_DLY_EN I2C_SLV0_DLY_EN
#define MPU9250_I2C_MST_DELAY_CTRL_DELAY_ES_SHADOW   7
#define MPU9250_I2C_MST_DELAY_CTRL_I2C_SLV4_DLY_EN   4
#define MPU9250_I2C_MST_DELAY_CTRL_I2C_SLV3_DLY_EN   3
#define MPU9250_I2C_MST_DELAY_CTRL_I2C_SLV2_DLY_EN   2
#define MPU9250_I2C_MST_DELAY_CTRL_I2C_SLV1_DLY_EN   1
#define MPU9250_I2C_MST_DELAY_CTRL_I2C_SLV0_DLY_EN   0

#define MPU9250_SIGNAL_PATH_RESET                    0x68 // | 104 | R/W | - - - - - GYRO_RST ACCEL_RST TEMP_RST
#define MPU9250_SIGNAL_PATH_RESET_GYRO_RST           2
#define MPU9250_SIGNAL_PATH_RESET_ACCEL_RST          1
#define MPU9250_SIGNAL_PATH_RESET_TEMP_RST           0

#define MPU9250_MOT_DETECT_CTRL                      0x69 // | 105 | R/W | ACCEL_INTEL_EN ACCEL_INTEL_MODE - - - 
#define MPU9250_MOT_DETECT_CTRL_ACCEL_INTEL_EN       7
#define MPU9250_MOT_DETECT_CTRL_ACCEL_INTEL_MODE     6

#define MPU9250_USER_CTRL                            0x6A // | 106 | R/W | - FIFO_EN I2C_MST_EN I2C_IF_DIS - FIFO_RST I2C_MST_RST SIG_CONDRST
#define MPU9250_USER_CTRL_FIFO_EN                    6
#define MPU9250_USER_CTRL_I2C_MST_EN                 5
#define MPU9250_USER_CTRL_I2C_IF_DIS                 4
#define MPU9250_USER_CTRL_FIFO_RST                   2
#define MPU9250_USER_CTRL_I2C_MST_RST                1
#define MPU9250_USER_CTRL_SIG_COND_RST               0

#define MPU9250_PWR_MGMT_1                           0x6B // | 107 | R/W | H_RESET SLEEP CYCLE GYRO_STANDBY PD_PTAT CLKSEL[2:0]
#define MPU9250_PWR_MGMT_1_H_RESET                   7
#define MPU9250_PWR_MGMT_1_SLEEP                     6
#define MPU9250_PWR_MGMT_1_CYCLE                     5
#define MPU9250_PWR_MGMT_1_GYRO_STANDBY              4
#define MPU9250_PWR_MGMT_1_PD_PTAT                   3
#define MPU9250_PWR_MGMT_1_CLKSEL                    2 // 3 bits

#define MPU9250_PWR_MGMT_2                           0x6C // | 108 | R/W | - DIS_XA DIS_YA DIS_ZA DIS_XG DIS_YG DIS_ZG
#define MPU9250_PWR_MGMT_2_DIS_XA                    5
#define MPU9250_PWR_MGMT_2_DIS_YA                    4
#define MPU9250_PWR_MGMT_2_DIS_ZA                    3
#define MPU9250_PWR_MGMT_2_DIS_XG                    2
#define MPU9250_PWR_MGMT_2_DIS_YG                    1
#define MPU9250_PWR_MGMT_2_DIS_ZG                    0

#define MPU9250_FIFO_COUNTH                          0x72 // | 114 | R/W | - FIFO_CNT[12:8]
#define MPU9250_FIFO_COUNTH_FIFO_CNT                 4 // 5 bits

#define MPU9250_FIFO_COUNTL                          0x73 // | 115 | R/W | FIFO_CNT[7:0]
#define MPU9250_FIFO_R_W                             0x74 // | 116 | R/W | D[7:0]
#define MPU9250_WHO_AM_I                             0x75 // | 117 | R   | WHOAMI[7:0]
#define MPU9250_XA_OFFSET_H                          0x77 // | 119 | R/W | XA_OFFS [14:7]

#define MPU9250_XA_OFFSET_L                          0x78 // | 120 | R/W | XA_OFFS [6:0] -
#define MPU9250_XA_OFFSET_L_XA_OFFS                  7 // 7 bits

#define MPU9250_YA_OFFSET_H                          0x7A // | 122 | R/W | YA_OFFS [14:7]

#define MPU9250_YA_OFFSET_L                          0x7B // | 123 | R/W | YA_OFFS [6:0] -
#define MPU9250_YA_OFFSET_L_YA_OFFS                  7 // 7 bits

#define MPU9250_ZA_OFFSET_H                          0x7D // | 125 | R/W | ZA_OFFS [14:7]

#define MPU9250_ZA_OFFSET_L                          0x7E // | 126 | R/W | ZA_OFFS [6:0] -
#define MPU9250_ZA_OFFSET_L_ZA_OFFS                  7 // 7 bits

#endif
