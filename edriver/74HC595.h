/*
file   : 74hc595.h
author : shentq
version: V1.0
date   : 2015/7/5

Copyright (c) 2015, eBox by shentqlf@163.com. All Rights Reserved.

Copyright Notice
No part of this software may be used for any commercial activities by any form or means, without the prior written consent of shentqlf@163.com.

Disclaimer
This specification is preliminary and is subject to change at any time without notice. shentqlf@163.com assumes no responsibility for any errors contained herein.
*/

#ifndef  __74HC595_H
#define  __74HC595_H

#include "ebox.h" 

class _74hc595
{
    public:
        
			_74hc595(GPIO* dataPin, GPIO* sckPin,GPIO* rckPin);
			void begin();
			void write(uint8_t* Data,uint8_t dataLen,uint8_t bitOder);
			void write(uint8_t data,uint8_t bitOder);
			void update();
    
    private:
			GPIO* _dataPin;
			GPIO* _sckPin;
			GPIO* _rckPin;

		
};

#endif
