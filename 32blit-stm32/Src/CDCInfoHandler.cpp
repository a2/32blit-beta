/*
 * CDCInfoHandler.cpp
 *
 *  Created on: 18 Jan 2020
 *      Author: andrewcapon
 */
#include "usbd_def.h"
#include "usbd_cdc_if.h"

#include "CDCInfoHandler.h"
#include "32blit.h"

bool CDCInfoHandler::StreamInit(CDCFourCC uCommand)
{
	if(blit_user_code_running())
		while(USBD_BUSY == CDC_Transmit_HS((uint8_t *)"32BL_EXT", 8))
				;
	else
		while(USBD_BUSY == CDC_Transmit_HS((uint8_t *)"32BL_INT", 8))
				;

	HAL_Delay(250);
	return false;
}


CDCCommandHandler::StreamResult CDCInfoHandler::StreamData(CDCDataStream &dataStream)
{
	return srFinish;
}
