/******************************************************************************************
***********************************- STD_Types.h                     **********************
***********************************-Created: Aug 12, 2023            **********************
***********************************-Author :Abderrahmane Lahouasna   **********************
***********************************-Version: 1                       **********************

******************************************************************************************/

/******************************************************************************************
*******************************guard of file will call on time in .c***********************
******************************************************************************************/



#ifndef STD_TYPES_H_
#define STD_TYPES_H_
#ifndef         FALSE
#define         FALSE      (0u)
#endif

#ifndef         TRUE
#define         TRUE        (1u)
#endif

#define      HIGH           (1u)
#define      LOW            (0u)

typedef    unsigned char                  u8;  // 0------>255

typedef    unsigned short int            u16;  // 0------>65536

typedef    unsigned long int             u32;  // 0------>4294967295

typedef    signed char                    s8;  // -128------>+127

typedef    signed short int              s16;  // -32768------>+32767

typedef    signed long int               s32;  // -2147483648------>+2147483647

typedef    unsigned long long int        u64; 

typedef    signed long long int          s64;

typedef    float                         f32;

typedef    double                        f64;

                        





#endif /* STD_TYPES_H_ */
