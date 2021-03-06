/*
 * Board.h
 *
 *  Created on: 2015年8月6日
 *      Author: Chris
 */

#ifndef BOARD_BOARD_H_
#define BOARD_BOARD_H_

//////////////////////////////////////////////////////
// 状态指示灯使用的管脚
//////////////////////////////////////////////////////

#define	AUTO_MODE_STATUS_LED_PIN		(12)		/* 自动模式状态指示灯控制脚 */
#define MANUAL_MODE_STATUS_LED_PIN		(11)		/* 手动模式状态指示灯控制脚 */
#define WATER_SUPPLY_STATUS_LED_PIN			(10)		/* 自动供水状态指示灯控制脚 */

//////////////////////////////////////////////////////
// 按键使用的管脚
//////////////////////////////////////////////////////
#define	SWITCH_MODE_PUSH_BUTTON_PIN		(9)			/* 模式切换按键管脚 */
#define SUPPLY_WATER_PUSH_BUTTON_PIN	(8)			/* 开始供水按键管脚 */
#define STOP_SUPPLYING_PUSH_BUTTON_PIN	(7)			/* 停止供水按键管脚 */

//////////////////////////////////////////////////////
// 继电器控制使用的管脚
//////////////////////////////////////////////////////
#define WATER_PUMP_CTRL_PIN				(6)			/* 水泵控制管脚 */
#define SOLENOID_VALVE_CTRL_PIN			(5)			/* 电磁阀控制管脚 */

//////////////////////////////////////////////////////
// 检测水是否供满的管脚
//////////////////////////////////////////////////////
#define IS_WATER_FULL_CHECK_PIN			(4)

//////////////////////////////////////////////////////
// DS1302时钟芯片连接管脚
//////////////////////////////////////////////////////
#define DS1302_SELECT_PIN				(3)
#define DS1302_SCL_PIN					(SCL)
#define DS1302_SDA_PIN					(SDA)

#endif /* BOARD_BOARD_H_ */
