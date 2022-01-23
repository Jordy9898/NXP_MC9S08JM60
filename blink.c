void delay();


void main(void) {
	EnableInterrupts;
  /* include your code here */
  PTDDD_PTDDD0=1;
  PTDDD_PTDDD1=1; 
  
  PTDD_PTDD0=0;
  PTDD_PTDD1=0;

  
  for(;;) {
	 __RESET_WATCHDOG();	/* feeds the dog */
   
	PTDD_PTDD0=0;
	PTDD_PTDD1=0;
	delay();
	PTDD_PTDD0=1;
	PTDD_PTDD1=1;
	delay();
  } /* loop forever */
  /* please make sure that you never leave main */
}
void delay(){
	int i=0;
	for(i=0;i<20000;i++){
		
	}
}
