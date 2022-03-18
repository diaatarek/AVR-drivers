# ifndef ADC_REGISTER_H
# define ADC_REGISTER_H

# define ADMUX      *((volatile u8*)0x27)
# define ADCSRA     *((volatile u8*)0x26)
# define ADCH       *((volatile u8*)0x25)
# define ADCL       *((volatile u8*)0x24)

# define ADMUX_REFS0  	6
# define ADMUX_REFS1	7
# define ADLAR          5
# define MUX4           4
# define MUX3           3
# define MUX2           2
# define MUX1           1
# define MUX0           0

# define ADEN           7
# define ADIF           4
# define ADATE          5
# define ADSC           6
# define ADPS2          2
# define ADPS1          1
# define ADPS0          0


# endif
