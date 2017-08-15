u8 bMBREntry[]={
//4M MBR
   0x80,		//0x1beh , x86 Default boot partition
   0x01,        //0x1bfh , Start Head No.
   0x0A,        //0x1c0h , Start Sector No.
   0x00,        //0x1c1h , Start Cylinder No.
   0x01,        //0x1c2h , Partition Type
   0x01,		//0x1c3h , Final Head No.
   0x10,        //0x1c4h , Final Sector No.
   0xf5,        //0x1c5h , Final Cylinder No.
   0x1b,        //0x1c6h , Start Sector No.(LBA)
   0x00,        //0x1c7h ,
   0x00,        //0x1c8h ,
   0x00,        //0x1c9h ,
   0xa5,        //0x1cah , Partition Size
   0x1e,        //0x1cbh ,
   0x00,        //0x1cch ,
   0x00,        //0x1cdh ,

//8M MBR
   0x80,		//0x1beh , x86 Default boot partition
   0x01,        //0x1bfh , Start Head No.
   0x0a,        //0x1c0h , Start Sector No.
   0x00,        //0x1c1h , Start Cylinder No.
   0x01,        //0x1c2h , Partition Type
   0x01,		//0x1c3h , Final Head No.
   0x50,        //0x1c4h , Final Sector No.
   0xed,        //0x1c5h , Final Cylinder No.
   0x19,        //0x1c6h , Start Sector No.(LBA)
   0x00,        //0x1c7h ,
   0x00,        //0x1c8h ,
   0x00,        //0x1c9h ,
   0xa7,        //0x1cah , Partition Size
   0x3d,        //0x1cbh ,
   0x00,        //0x1cch ,
   0x00,        //0x1cdh ,

//16M MBR
   0x80,		//0x1beh , x86 Default boot partition
   0x01,        //0x1bfh , Start Head No.
   0x0a,        //0x1c0h , Start Sector No.
   0x00,        //0x1c1h , Start Cylinder No.
   0x01,        //0x1c2h , Partition Type
   0x03,		//0x1c3h , Final Head No.
   0x50,        //0x1c4h , Final Sector No.
   0xed,        //0x1c5h , Final Cylinder No.
   0x19,        //0x1c6h , Start Sector No.(LBA)
   0x00,        //0x1c7h ,
   0x00,        //0x1c8h ,
   0x00,        //0x1c9h ,
   0x67,        //0x1cah , Partition Size
   0x7b,        //0x1cbh ,
   0x00,        //0x1cch ,
   0x00,        //0x1cdh ,

//32M MBR
   0x80,		//0x1beh , x86 Default boot partition
   0x01,        //0x1bfh , Start Head No.
   0x04,        //0x1c0h , Start Sector No.
   0x00,        //0x1c1h , Start Cylinder No.
   0x01,        //0x1c2h , Partition Type
   0x03,		//0x1c3h , Final Head No.
   0xd0,        //0x1c4h , Final Sector No.
   0xdd,        //0x1c5h , Final Cylinder No.
   0x13,        //0x1c6h , Start Sector No.(LBA)
   0x00,        //0x1c7h ,
   0x00,        //0x1c8h ,
   0x00,        //0x1c9h ,
   0x6d,        //0x1cah , Partition Size
   0xf7,        //0x1cbh ,
   0x00,        //0x1cch ,
   0x00,        //0x1cdh ,

//64M MBR
   0x80,		//0x1beh , x86 Default boot partition
   0x02,        //0x1bfh , Start Head No.
   0x08,        //0x1c0h , Start Sector No.
   0x00,        //0x1c1h , Start Cylinder No.
   0x01,        //0x1c2h , Partition Type
   0x07,		//0x1c3h , Final Head No.
   0xd0,        //0x1c4h , Final Sector No.
   0xdd,        //0x1c5h , Final Cylinder No.
   0x27,        //0x1c6h , Start Sector No.(LBA)
   0x00,        //0x1c7h ,
   0x00,        //0x1c8h ,
   0x00,        //0x1c9h ,
   0xd9,        //0x1cah , Partition Size
   0xee,        //0x1cbh ,
   0x01,        //0x1cch ,
   0x00,        //0x1cdh ,

//128M MBR
   0x80,		//0x1beh , x86 Default boot partition
   0x02,        //0x1bfh , Start Head No.
   0x02,        //0x1c0h , Start Sector No.
   0x00,        //0x1c1h , Start Cylinder No.
   0x06,        //0x1c2h , Partition Type
   0x0f,		//0x1c3h , Final Head No.
   0xd0,        //0x1c4h , Final Sector No.
   0xdd,        //0x1c5h , Final Cylinder No.
   0x21,        //0x1c6h , Start Sector No.(LBA)
   0x00,        //0x1c7h ,
   0x00,        //0x1c8h ,
   0x00,        //0x1c9h ,
   0xdf,        //0x1cah , Partition Size
   0xdd,        //0x1cbh ,
   0x03,        //0x1cch ,
   0x00         //0x1cdh ,
};

u8 bPBREntryPart1[]={
//128M PBR
   0xE9,		//0x00h , Jump code
   0x00,        //0x01h ,
   0x00,        //0x02h ,

   0x20,		//0x03h , OEM name ver
   0x20,        //0x04h ,
   0x20,        //0x05h ,
   0x20,		//0x06h ,
   0x20,        //0x07h ,
   0x20,        //0x08h ,
   0x20,		//0x09h ,
   0x20,        //0x0ah ,

   0x00,        //0x0bh , bytes per sector
   0x02,        //0x0ch ,

   0x20,		//0x0dh , sectors per cluster

   0x01,        //0x0eh , reserved sector count
   0x00,        //0x0fh ,

   0x02,        //0x10h , FAT count

   0x00,        //0x11h , Entry count of Root Dir
   0x02         //0x12h ,
};

//BYTE code bPBREntryModify[]={
u8 bPBREntryPart2[]={
//4M PBR
   0xa5,		//0x13h , logical sector count
   0x1e,        //0x14h ,

   0xf8,        //0x15h , Media ID

   0x02,        //0x16h , sectors per FAT
   0x00,        //0x17h ,

   0x10,        //0x18h , Sector count per head
   0x00,        //0x19h ,

   0x02,        //0x1ah , Head count
   0x00,        //0x1bh ,

   0x1b,        //0x1ch , Hidden sector count
   0x00,        //0x1dh ,
   0x00,        //0x1eh ,
   0x00,        //0x1fh ,

   0x00,        //0x20h , logical sector  count
   0x00,        //0x21h ,
   0x00,        //0x22h ,
   0x00,		//0x23h ,
//8M PBR
   0xa7,		//0x13h , logical sector count
   0x3d,        //0x14h ,

   0xf8,        //0x15h , Media ID

   0x03,        //0x16h , sectors per FAT
   0x00,        //0x17h ,

   0x10,        //0x18h , Sector count per head
   0x00,        //0x19h ,

   0x02,        //0x1ah , Head count
   0x00,        //0x1bh ,

   0x19,        //0x1ch , Hidden sector count
   0x00,        //0x1dh ,
   0x00,        //0x1eh ,
   0x00,        //0x1fh ,

   0x00,        //0x20h , logical sector  count
   0x00,        //0x21h ,
   0x00,        //0x22h ,
   0x00,		//0x23h ,
//16M PBR
   0x67,		//0x13h , logical sector count
   0x7b,        //0x14h ,

   0xf8,        //0x15h , Media ID

   0x03,        //0x16h , sectors per FAT
   0x00,        //0x17h ,

   0x10,        //0x18h , Sector count per head
   0x00,        //0x19h ,

   0x04,        //0x1ah , Head count
   0x00,        //0x1bh ,

   0x19,        //0x1ch , Hidden sector count
   0x00,        //0x1dh ,
   0x00,        //0x1eh ,
   0x00,        //0x1fh ,

   0x00,        //0x20h , logical sector  count
   0x00,        //0x21h ,
   0x00,        //0x22h ,
   0x00,		//0x23h ,
//32M PBR
   0x6d,		//0x13h , logical sector count
   0xf7,        //0x14h ,

   0xf8,        //0x15h , Media ID

   0x06,        //0x16h , sectors per FAT
   0x00,        //0x17h ,

   0x10,        //0x18h , Sector count per head
   0x00,        //0x19h ,

   0x04,        //0x1ah , Head count
   0x00,        //0x1bh ,

   0x13,        //0x1ch , Hidden sector count
   0x00,        //0x1dh ,
   0x00,        //0x1eh ,
   0x00,        //0x1fh ,

   0x00,        //0x20h , logical sector  count
   0x00,        //0x21h ,
   0x00,        //0x22h ,
   0x00,		//0x23h ,
//64M PBR
   0x00,		//0x13h , logical sector count
   0x00,        //0x14h ,

   0xf8,        //0x15h , Media ID

   0x0c,        //0x16h , sectors per FAT
   0x00,        //0x17h ,

   0x10,        //0x18h , Sector count per head
   0x00,        //0x19h ,

   0x08,        //0x1ah , Head count
   0x00,        //0x1bh ,

   0x27,        //0x1ch , Hidden sector count
   0x00,        //0x1dh ,
   0x00,        //0x1eh ,
   0x00,        //0x1fh ,

   0xd9,        //0x20h , logical sector  count
   0xee,        //0x21h ,
   0x01,        //0x22h ,
   0x00,		//0x23h ,
//128M PBR
   0x00,		//0x13h , logical sector count
   0x00,        //0x14h ,

   0xf8,        //0x15h , Media ID

   0x1f,        //0x16h , sectors per FAT
   0x00,        //0x17h ,

   0x10,        //0x18h , Sector count per head
   0x00,        //0x19h ,

   0x10,        //0x1ah , Head count
   0x00,        //0x1bh ,

   0x21,        //0x1ch , Hidden sector count
   0x00,        //0x1dh ,
   0x00,        //0x1eh ,
   0x00,        //0x1fh ,

   0xdf,        //0x20h , logical sector  count
   0xdd,        //0x21h ,
   0x03,        //0x22h ,
   0x00			//0x23h ,
};

u8 bPBREntryPart3[]={
   0x00,        //0x24h , physical drive number

   0x00,        //0x25h , reserved

   0x29,        //0x26h , extended boot iden code

   0x00,        //0x27h , volume serial number
   0x00,        //0x28h ,
   0x00,        //0x29h ,
   0x00,        //0x2ah ,

   0x00,        //0x2bh , volumn label
   0x00,        //0x2ch ,
   0x00,        //0x2dh ,
   0x00,        //0x2eh ,
   0x00,        //0x2fh ,
   0x00,        //0x30h ,
   0x00,        //0x31h ,
   0x00,        //0x32h ,
   0x00,		//0x33h ,
   0x00,        //0x34h ,
   0x00,        //0x35h ,

   'F',			//0x36h , file system type
   'A',			//0x37h ,
   'T',			//0x38h ,
   '1',			//0x39h ,
   '6',			//0x3ah ,
   0x20,		//0x3bh ,
   0x20,		//0x3ch ,
   0x20			//0x3dh ,
};

u8 bFATROOTADDRESS[]={
//4M address
   28,        //FAT1
   30,        //FAT2
   32,        //ROOT DIR
//8M address
   26,        //FAT1
   29,        //FAT2
   32,        //ROOT DIR
//16M address
   26,        //FAT1
   29,        //FAT2
   32,        //ROOT DIR
//32M address
   20,        //FAT1
   26,        //FAT2
   32,        //ROOT DIR
//64M address
   40,        //FAT1
   52,        //FAT2
   64,        //ROOT DIR
//128M address
   34,        //FAT1
   65,        //FAT2
   96         //ROOT DIR
};