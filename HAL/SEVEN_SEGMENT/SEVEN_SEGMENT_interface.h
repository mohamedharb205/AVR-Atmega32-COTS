/*****************************************************************************************/
/*****************************************************************************************/
/***********************		AUTHOR	:	MOHAMED HARB		**************************/
/***********************		LAYER	:	HAL					**************************/
/***********************		SWC		:	SEVEN SEGMENT		**************************/
/***********************		DATE	:	OCT 20, 2023		**************************/
/***********************		VERSION	:	V01					**************************/
/*****************************************************************************************/
/*****************************************************************************************/


#ifndef HAL_SEVEN_SEGMENT_SEVEN_SEGMENT_INTERFACE_H_
#define HAL_SEVEN_SEGMENT_SEVEN_SEGMENT_INTERFACE_H_


void SevenSegment_voidInit();

void SevenSegmentBCD_voidWriteNumber(u16 copy_u16Number);	//error when i want to write number == 10000 because the argument number that i gave u8 >>> u16

void BCD_To_7Segment(u8 copy_u16Number, u8 copy_u8Display);


#endif /* HAL_SEVEN_SEGMENT_SEVEN_SEGMENT_INTERFACE_H_ */
