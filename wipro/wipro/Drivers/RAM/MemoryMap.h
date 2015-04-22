/*
 * MemoryMap.h
 *
 * Created: 4/6/2015 12:00:47 AM
 *  Author: Brandon
 */ 


#ifndef MEMORYMAP_H_
#define MEMORYMAP_H_

#define MAX_ADDRESS 0x3FFFF
#define HEX_FILE_ADDRESS 0x000000
#define HEX_FILE_SIZE 0xFFFF
#define WIFI_RAW_ADDRESS 0x0000
#define WIFI_RAW_SIZE 0x400
#define WIFI_QSTRING_ADDRESS 0x0400 
#define WIFI_QSTRING_SIZE 0x400 //Ends at 0x102FF 
#define HTTP_STRING_ADDRESS 0x10300 
#define HTTP_STRING_SIZE 0x400 //Ends at 0x106FF 
//#define STATUS_FLAG_ADDRESS 0x10700 
#define STATUS_FLAG_ADDRESS 0x3000
#define STATUS_FLAG_SIZE 0x100 

#endif /* MEMORYMAP_H_ */