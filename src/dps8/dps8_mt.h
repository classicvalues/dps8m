extern DEVICE tape_dev;
void mt_init(void);
t_stat cable_mt (int mt_unit_num, int iom_unit_num, int chan_num, int dev_code);
int get_mt_numunits (void);
//UNIT * getTapeUnit (uint driveNumber);
//void tape_send_special_interrupt (uint driveNumber);
void loadTape (uint driveNumber, char * tapeFilename, bool ro);
t_stat attachTape (char * label, bool withring, char * drive);
