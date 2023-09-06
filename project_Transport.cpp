#include<stdio.h>
#include<string.h>

int main(){
	int select_Airline,select_Transport,select_Airline_Mode,sec_Key,nic_Number,payment_Method,creditcard_User,ticket_No,car_Transport,car_Transport_Mode;
	int repeat = 1;
	int sec_Keys[2] = {12345,6789};
	int ticket_Nums[10];
	int num_Ticket = 1;
	int ticket_Number = 16120;
	int creditcard_Users[2]={2468,1357};
	int nic_Numbers[2] = {123456789,789456123};
	char name_User[50];
	char location_User[50];
	char user_Destination[50];
	char destinations_Car[2][10] = {"malir","gulshan"};
	char location_Available[7][20] = {"Karachi","Islamabad","Lahore","Dubai","Multan","Faisalabad","Peshawar"};
	
	
	
	printf("-------------------------------------------------------------------------------\n");
	printf("--------------------WELCOME TO THE TRANSPORT SYSTEM----------------------------\n");
	printf("-------------------------------------------------------------------------------\n\n");
	while(1){
	
	printf("\n\nFollowing are the transport systems:\n");
	printf("::::::::::::::::::::::::::::::::::::\n");
	printf("1.Airport System\n2.Railway System\n3.Car Transport System\n4.Exit\n");
	printf("::::::::::::::::::::::::::::::::::::\n");
	printf("\n");
	printf("Select: ");	
	scanf("%d",&select_Transport);
	if(select_Transport==1){
	repeat = 1;
	printf("\n\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("-------------------------WELCOME TO JINNAH INTERNATIONAL AIRPORT------------------------");
	printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("\n\n");
	printf("Enter Security Key: ");
	scanf("%d",&sec_Key);
	
	for(int i = 0;i<2;i++){
		if(sec_Key==sec_Keys[i]){
			printf("\n-------------------------\n");
			printf("_____ACCESS GRANTED______\n");
			printf("--------------------------\n\n");
			while(repeat){
			printf("Following are the airlines we have:\n");
			printf("::::::::::::::::::::::::::::::::::::\n\n");
			printf("1.Shaheen Airline\n2.Air Blue\n3.PIA\n4.Jinnah Express\n5.Exit\n\n");
			printf("::::::::::::::::::::::::::::::::::::\n\n");
			printf("Select: ");
			scanf("%d",&select_Airline);
			if(select_Airline == 1){
				
				printf("\n::::::::::::::::::WELCOME TO SHAHEEN AIRLINE:::::::::::::::::\n\n");
				while(repeat){
				
				printf("\nFollowing Are The Actions You Can Perform:\n");
				printf("::::::::::::::::::::::::::::::::::::::::::\n\n");
				printf("1.Check Today's Flights\n2.Book A Ticket\n3.Remove a Ticket\n4.Exit\n");
				printf("\n::::::::::::::::::::::::::::::::::::\n");
				printf("\n");
				printf("Select: ");
				scanf("%d",&select_Airline_Mode);
				if(select_Airline_Mode==1){
					printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
					printf("Flight\t\t\tFrom\t\t\tTime\t\t\tRemarks\n");
					printf("------------------------------------------------------------------------------------------\n");
					printf("LG\t8256\t\tIslamabad\t\t5:40\t\t\tDelayed 7:00\n");
					printf("LH\t2322\t\tLahore\t\t\t8:00\t\t\tOn Time\n");
					printf("OK\t1666\t\tKarachi\t\t\t2:00\t\t\tOn Time\n");
					printf("LG\t8282\t\tIslamabad\t\t12:00\t\t\tOn Time\n");
					printf("ZA\t7588\t\tQuetta\t\t\t11:00\t\t\tDelayed 2:00\n");
					printf("------------------------------------------------------------------------------------------\n");
					printf("\n");
				}
				else if(select_Airline_Mode==2){
					printf("---------------WELCOME TO TICKET BOOKING SECTION--------------------\n\n");
					int check = 0;
					int check2 = 0;
					printf("Please, Enter Your Nic Number: ");
						scanf("%d",&nic_Number);
						printf("Please, Enter Your Name: ");
						scanf("%s",&name_User);
						for (int i = 0; i < 3; i++) {
                			if (nic_Number == nic_Numbers[i]) {
                				check=1;
                    			printf("Please,Enter Your Location: ");
                    			scanf("%s", &location_User);
                    			printf("Please,Enter Your Destination: ");
                    			scanf("%s",user_Destination);
                    			for(int i = 0;i<7;i++){
                    				if(strcmp(user_Destination,location_Available[i])==0){
                    					check2 = 1;
                    					printf("\n----------------------\n");
                    			printf("Payment Methods:\n");
                    			printf("1. Cash\n2. Credit Card\n");
                    			printf("Select: ");
                    			scanf("%d", &payment_Method);

                    			if (payment_Method == 1) {
                        			printf("\n\nHere's Your Receipt!\n");
                        			printf("Pay At the counter Number 25, Thank You!!\n\n");
                        			break;
                				} else if (payment_Method == 2) {
                        			printf("Enter Credit Card No: ");
                        			scanf("%d", &creditcard_User);
                        			int validCard = 0;

                        			for (int i = 0; i < 3; i++) {
                            			if (creditcard_User == creditcard_Users[i]) {
                                			printf("\n\nPayment Received!\n");
                                			printf("Here is your Ticket!\n");
                                			printf("Thank You!!\n\n");
                                			num_Ticket++;
                                			ticket_Number+=1;
                                printf("_______________________________________________________________________\n");	
								printf("_____________________________TICKET____________________________________\n");
								printf("_______________________________________________________________________\n");
								printf("------------NAME: %s\n",name_User);
								printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
								printf("------------LOCATION: %s\n",location_User);
								printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
								printf("------------DESTINATION: %s\n",user_Destination);
								printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
								printf("------------TICKET NO: %d\n",ticket_Number);
								printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
								printf("------------AIRLINE: SHAHEEN AIRLINE 1519MD\n");
								printf("_______________________________________________________________________\n\n");
                                			ticket_Nums[num_Ticket] = ticket_Number;
                                			validCard = 1;
                                			
                            			}
                        	}

                        if (!validCard) {
                            printf("Invalid Credit Card Number!\n");
                        }
                    }
				}
									
									
								}
                    			
                    			if (!check2) {
   									printf("\n\nPlease Enter a Valid Destination!\n\n");
									break;
								}
                    			
                	
							}
							if(!check){
								printf("\nInvalid Nic Number.\n\n");
								break;
							}
				}
			}
			else if(select_Airline_Mode==3){
				printf("---------------WELCOME TO REMOVE TICKET SECTION--------------------\n\n");
				int check = 0;
				printf("Please, Enter Your Nic Number: ");
            scanf("%d", &nic_Number);
            for (int i = 0; i < 2; i++) {
                if (nic_Number == nic_Numbers[i]) {
                    check = 1;
					printf("Enter Ticket Number: ");
                    scanf("%d", &ticket_No);
                    int ticketFound = 0;

                    for (int j = 0; j < 10; j++) {
                        if (ticket_No == ticket_Nums[j]) {
                            ticket_Nums[j] = 0; // Remove ticket
                            printf("Ticket ID Removed Successfully!!\n\n");
                            ticketFound = 1;
                            
                        }
                    }

                    if (!ticketFound) {
                    	printf("------------------------\n");
                        printf("No Ticket ID Found!\n");
                        printf("------------------------\n");
                    }
                }
                if(!check){
                	printf("\n\nInvalid Nic Number.\n\n");
                	break;
				}
            }
			}
			else if(select_Airline_Mode==4){
				printf("\n\nExiting.....\n\n");
				repeat--;
			}
		}
		}
		
			else if(select_Airline == 2){
				printf("::::::::::::::::::WELCOME TO AIRBLUE AIRLINE:::::::::::::::::\n\n");
				while(repeat){
				
				printf("\nFollowing Are The Actions You Can Perform:\n");
				printf("::::::::::::::::::::::::::::::::::::::::::\n\n");
				printf("1.Check Today's Flights\n2.Book A Ticket\n3.Remove a Ticket\n4.Exit\n");
				printf("\n::::::::::::::::::::::::::::::::::::\n");
				printf("\n");
				printf("Select: ");
				scanf("%d",&select_Airline_Mode);
				if(select_Airline_Mode==1){
					printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
					printf("Flight\t\t\tFrom\t\t\tTime\t\t\tRemarks\n");
					printf("------------------------------------------------------------------------------------------\n");
					printf("LG\t8256\t\tIslamabad\t\t5:40\t\t\tDelayed 7:00\n");
					printf("LH\t2322\t\tLahore\t\t\t8:00\t\t\tOn Time\n");
					printf("OK\t1666\t\tKarachi\t\t\t2:00\t\t\tOn Time\n");
					printf("LG\t8282\t\tIslamabad\t\t12:00\t\t\tOn Time\n");
					printf("ZA\t7588\t\tQuetta\t\t\t11:00\t\t\tDelayed 2:00\n");
					printf("------------------------------------------------------------------------------------------\n");
					printf("\n");
				}
				else if(select_Airline_Mode==2){
					printf("---------------WELCOME TO TICKET BOOKING SECTION--------------------\n\n");
					int check = 0;
					int check2 = 0;
					printf("Please, Enter Your Nic Number: ");
						scanf("%d",&nic_Number);
						printf("Please, Enter Your Name: ");
						scanf("%s",&name_User);
						for (int i = 0; i < 3; i++) {
                			if (nic_Number == nic_Numbers[i]) {
                				check=1;
                    			printf("Please,Enter Your Location: ");
                    			scanf("%s", &location_User);
                    			printf("Please,Enter Your Destination: ");
                    			scanf("%s",user_Destination);
                    			for(int i = 0;i<7;i++){
                    				if(strcmp(user_Destination,location_Available[i])==0){
                    					check2 = 1;
                    					printf("\n----------------------\n");
                    			printf("Payment Methods:\n");
                    			printf("1. Cash\n2. Credit Card\n");
                    			printf("Select: ");
                    			scanf("%d", &payment_Method);

                    			if (payment_Method == 1) {
                        			printf("\n\nHere's Your Receipt!\n");
                        			printf("Pay At the counter Number 25, Thank You!!\n\n");
                        			break;
                				} else if (payment_Method == 2) {
                        			printf("Enter Credit Card No: ");
                        			scanf("%d", &creditcard_User);
                        			int validCard = 0;

                        			for (int i = 0; i < 3; i++) {
                            			if (creditcard_User == creditcard_Users[i]) {
                                			printf("\n\nPayment Received!\n");
                                			printf("Here is your Ticket!\n");
                                			printf("Thank You!!\n\n");
                                			num_Ticket++;
                                			ticket_Number+=1;
                                printf("_______________________________________________________________________\n");	
								printf("_____________________________TICKET____________________________________\n");
								printf("_______________________________________________________________________\n");
								printf("------------NAME: %s\n",name_User);
								printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
								printf("------------LOCATION: %s\n",location_User);
								printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
								printf("------------DESTINATION: %s\n",user_Destination);
								printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
								printf("------------TICKET NO: %d\n",ticket_Number);
								printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
								printf("------------AIRLINE: AIRBLUE AIRLINE 1519MD\n");
								printf("_______________________________________________________________________\n\n");
                                			ticket_Nums[num_Ticket] = ticket_Number;
                                			validCard = 1;
                                			
                            			}
                        	}

                        if (!validCard) {
                            printf("Invalid Credit Card Number!\n");
                        }
                    }
				}
									
									
								}
                    			
                    			if (!check2) {
   									printf("\n\nPlease Enter a Valid Destination!\n\n");
									break;
								}
                    			
                	
							}
							if(!check){
								printf("\nInvalid Nic Number.\n\n");
								break;
							}
				}
			}
			else if(select_Airline_Mode==3){
				printf("---------------WELCOME TO REMOVE TICKET SECTION--------------------\n\n");
				int check = 0;
				printf("Please, Enter Your Nic Number: ");
            scanf("%d", &nic_Number);
            for (int i = 0; i < 2; i++) {
                if (nic_Number == nic_Numbers[i]) {
                    check = 1;
					printf("Enter Ticket Number: ");
                    scanf("%d", &ticket_No);
                    int ticketFound = 0;

                    for (int j = 0; j < 10; j++) {
                        if (ticket_No == ticket_Nums[j]) {
                            ticket_Nums[j] = 0; // Remove ticket
                            printf("Ticket ID Removed Successfully!!\n\n");
                            ticketFound = 1;
                            
                        }
                    }

                    if (!ticketFound) {
                    	printf("------------------------\n");
                        printf("No Ticket ID Found!\n");
                        printf("------------------------\n");
                    }
                }
                if(!check){
                	printf("\n\nInvalid Nic Number.\n\n");
                	break;
				}
            }
			}
			else if(select_Airline_Mode==4){
				printf("\n\nExiting.....\n\n");
				repeat--;
			}
		}
			}
			else if(select_Airline == 3){
				printf("::::::::::::::::::WELCOME TO PIA AIRLINE:::::::::::::::::\n\n");
				while(repeat){
				
				printf("\nFollowing Are The Actions You Can Perform:\n");
				printf("::::::::::::::::::::::::::::::::::::::::::\n\n");
				printf("1.Check Today's Flights\n2.Book A Ticket\n3.Remove a Ticket\n4.Exit\n");
				printf("\n::::::::::::::::::::::::::::::::::::\n");
				printf("\n");
				printf("Select: ");
				scanf("%d",&select_Airline_Mode);
				if(select_Airline_Mode==1){
					printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
					printf("Flight\t\t\tFrom\t\t\tTime\t\t\tRemarks\n");
					printf("------------------------------------------------------------------------------------------\n");
					printf("LG\t8256\t\tIslamabad\t\t5:40\t\t\tDelayed 7:00\n");
					printf("LH\t2322\t\tLahore\t\t\t8:00\t\t\tOn Time\n");
					printf("OK\t1666\t\tKarachi\t\t\t2:00\t\t\tOn Time\n");
					printf("LG\t8282\t\tIslamabad\t\t12:00\t\t\tOn Time\n");
					printf("ZA\t7588\t\tQuetta\t\t\t11:00\t\t\tDelayed 2:00\n");
					printf("------------------------------------------------------------------------------------------\n");
					printf("\n");
				}
				else if(select_Airline_Mode==2){
					printf("---------------WELCOME TO TICKET BOOKING SECTION--------------------\n\n");
					int check = 0;
					int check2 = 0;
					printf("Please, Enter Your Nic Number: ");
						scanf("%d",&nic_Number);
						printf("Please, Enter Your Name: ");
						scanf("%s",&name_User);
						for (int i = 0; i < 3; i++) {
                			if (nic_Number == nic_Numbers[i]) {
                				check=1;
                    			printf("Please,Enter Your Location: ");
                    			scanf("%s", &location_User);
                    			printf("Please,Enter Your Destination: ");
                    			scanf("%s",user_Destination);
                    			for(int i = 0;i<7;i++){
                    				if(strcmp(user_Destination,location_Available[i])==0){
                    					check2 = 1;
                    					printf("\n----------------------\n");
                    			printf("Payment Methods:\n");
                    			printf("1. Cash\n2. Credit Card\n");
                    			printf("Select: ");
                    			scanf("%d", &payment_Method);

                    			if (payment_Method == 1) {
                        			printf("\n\nHere's Your Receipt!\n");
                        			printf("Pay At the counter Number 25, Thank You!!\n\n");
                        			break;
                				} else if (payment_Method == 2) {
                        			printf("Enter Credit Card No: ");
                        			scanf("%d", &creditcard_User);
                        			int validCard = 0;

                        			for (int i = 0; i < 3; i++) {
                            			if (creditcard_User == creditcard_Users[i]) {
                                			printf("\n\nPayment Received!\n");
                                			printf("Here is your Ticket!\n");
                                			printf("Thank You!!\n\n");
                                			num_Ticket++;
                                			ticket_Number+=1;
                                printf("_______________________________________________________________________\n");	
								printf("_____________________________TICKET____________________________________\n");
								printf("_______________________________________________________________________\n");
								printf("------------NAME: %s\n",name_User);
								printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
								printf("------------LOCATION: %s\n",location_User);
								printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
								printf("------------DESTINATION: %s\n",user_Destination);
								printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
								printf("------------TICKET NO: %d\n",ticket_Number);
								printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
								printf("------------AIRLINE: PIA AIRLINE 1519MD\n");
								printf("_______________________________________________________________________\n\n");
                                			ticket_Nums[num_Ticket] = ticket_Number;
                                			validCard = 1;
                                			
                            			}
                        	}

                        if (!validCard) {
                            printf("Invalid Credit Card Number!\n");
                        }
                    }
				}
									
									
								}
                    			
                    			if (!check2) {
   									printf("\n\nPlease Enter a Valid Destination!\n\n");
									break;
								}
                    			
                	
							}
							if(!check){
								printf("\nInvalid Nic Number.\n\n");
								break;
							}
				}
			}
			else if(select_Airline_Mode==3){
				printf("---------------WELCOME TO REMOVE TICKET SECTION--------------------\n\n");
				int check = 0;
				printf("Please, Enter Your Nic Number: ");
            scanf("%d", &nic_Number);
            for (int i = 0; i < 2; i++) {
                if (nic_Number == nic_Numbers[i]) {
                    check = 1;
					printf("Enter Ticket Number: ");
                    scanf("%d", &ticket_No);
                    int ticketFound = 0;

                    for (int j = 0; j < 10; j++) {
                        if (ticket_No == ticket_Nums[j]) {
                            ticket_Nums[j] = 0; // Remove ticket
                            printf("Ticket ID Removed Successfully!!\n\n");
                            ticketFound = 1;
                            
                        }
                    }

                    if (!ticketFound) {
                    	printf("------------------------\n");
                        printf("No Ticket ID Found!\n");
                        printf("------------------------\n");
                    }
                }
                if(!check){
                	printf("\n\nInvalid Nic Number.\n\n");
                	break;
				}
            }
			}
			else if(select_Airline_Mode==4){
				printf("\n\nExiting.....\n\n");
				repeat--;
			}
		}
			}
			else if(select_Airline == 4){
				printf("::::::::::::::::::WELCOME TO JINNAH EXPRESS AIRLINE:::::::::::::::::\n\n");
				while(repeat){
				
				printf("\nFollowing Are The Actions You Can Perform:\n");
				printf("::::::::::::::::::::::::::::::::::::::::::\n\n");
				printf("1.Check Today's Flights\n2.Book A Ticket\n3.Remove a Ticket\n4.Exit\n");
				printf("\n::::::::::::::::::::::::::::::::::::\n");
				printf("\n");
				printf("Select: ");
				scanf("%d",&select_Airline_Mode);
				if(select_Airline_Mode==1){
					printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
					printf("Flight\t\t\tFrom\t\t\tTime\t\t\tRemarks\n");
					printf("------------------------------------------------------------------------------------------\n");
					printf("LG\t8256\t\tIslamabad\t\t5:40\t\t\tDelayed 7:00\n");
					printf("LH\t2322\t\tLahore\t\t\t8:00\t\t\tOn Time\n");
					printf("OK\t1666\t\tKarachi\t\t\t2:00\t\t\tOn Time\n");
					printf("LG\t8282\t\tIslamabad\t\t12:00\t\t\tOn Time\n");
					printf("ZA\t7588\t\tQuetta\t\t\t11:00\t\t\tDelayed 2:00\n");
					printf("------------------------------------------------------------------------------------------\n");
					printf("\n");
				}
				else if(select_Airline_Mode==2){
					printf("---------------WELCOME TO TICKET BOOKING SECTION--------------------\n\n");
					int check = 0;
					int check2 = 0;
					printf("Please, Enter Your Nic Number: ");
						scanf("%d",&nic_Number);
						printf("Please, Enter Your Name: ");
						scanf("%s",&name_User);
						for (int i = 0; i < 3; i++) {
                			if (nic_Number == nic_Numbers[i]) {
                				check=1;
                    			printf("Please,Enter Your Location: ");
                    			scanf("%s", &location_User);
                    			printf("Please,Enter Your Destination: ");
                    			scanf("%s",user_Destination);
                    			for(int i = 0;i<7;i++){
                    				if(strcmp(user_Destination,location_Available[i])==0){
                    					check2 = 1;
                    					printf("\n----------------------\n");
                    			printf("Payment Methods:\n");
                    			printf("1. Cash\n2. Credit Card\n");
                    			printf("Select: ");
                    			scanf("%d", &payment_Method);

                    			if (payment_Method == 1) {
                        			printf("\n\nHere's Your Receipt!\n");
                        			printf("Pay At the counter Number 25, Thank You!!\n\n");
                        			break;
                				} else if (payment_Method == 2) {
                        			printf("Enter Credit Card No: ");
                        			scanf("%d", &creditcard_User);
                        			int validCard = 0;

                        			for (int i = 0; i < 3; i++) {
                            			if (creditcard_User == creditcard_Users[i]) {
                                			printf("\n\nPayment Received!\n");
                                			printf("Here is your Ticket!\n");
                                			printf("Thank You!!\n\n");
                                			num_Ticket++;
                                			ticket_Number+=1;
                                printf("_______________________________________________________________________\n");	
								printf("_____________________________TICKET____________________________________\n");
								printf("_______________________________________________________________________\n");
								printf("------------NAME: %s\n",name_User);
								printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
								printf("------------LOCATION: %s\n",location_User);
								printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
								printf("------------DESTINATION: %s\n",user_Destination);
								printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
								printf("------------TICKET NO: %d\n",ticket_Number);
								printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
								printf("------------AIRLINE: JINNAH EXPRESS AIRLINE 1519MD\n");
								printf("_______________________________________________________________________\n\n");
                                			ticket_Nums[num_Ticket] = ticket_Number;
                                			validCard = 1;
                                			
                            			}
                        	}

                        if (!validCard) {
                            printf("Invalid Credit Card Number!\n");
                        }
                    }
				}
									
									
								}
                    			
                    			if (!check2) {
   									printf("\n\nPlease Enter a Valid Destination!\n\n");
									break;
								}
                    			
                	
							}
							if(!check){
								printf("\nInvalid Nic Number.\n\n");
								break;
							}
				}
			}
			else if(select_Airline_Mode==3){
				printf("---------------WELCOME TO REMOVE TICKET SECTION--------------------\n\n");
				int check = 0;
				printf("Please, Enter Your Nic Number: ");
            scanf("%d", &nic_Number);
            for (int i = 0; i < 2; i++) {
                if (nic_Number == nic_Numbers[i]) {
                    check = 1;
					printf("Enter Ticket Number: ");
                    scanf("%d", &ticket_No);
                    int ticketFound = 0;

                    for (int j = 0; j < 10; j++) {
                        if (ticket_No == ticket_Nums[j]) {
                            ticket_Nums[j] = 0; // Remove ticket
                            printf("Ticket ID Removed Successfully!!\n\n");
                            ticketFound = 1;
                            
                        }
                    }

                    if (!ticketFound) {
                    	printf("------------------------\n");
                        printf("No Ticket ID Found!\n");
                        printf("------------------------\n");
                    }
                }
                if(!check){
                	printf("\n\nInvalid Nic Number.\n\n");
                	break;
				}
            }
			}
			else if(select_Airline_Mode==4){
				printf("\n\nExiting.....\n\n");
				repeat--;
			}
		}
			}
			else if(select_Airline == 5){
				printf("::::::::::::::::::EXIT:::::::::::::::::\n\n");
				break;
			}
			else{
				printf("\nPlease Select a valid Airline.\n\n");
			}
		}
		}
		else if(sec_Key!=sec_Keys[i]){
			printf("||ALERT|| Reported To Security Depart!");
			break;
		}
	}
	
}

else if(select_Transport==2){
	repeat = 1;
	printf("\n\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("-------------------------WELCOME TO DRIGH ROAD STATION----------------------------\n");
	printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
	printf("Enter Security Key: ");
	scanf("%d",&sec_Key);
	
	for(int i = 0;i<2;i++){
		if(sec_Key==sec_Keys[i]){
			printf("\n-------------------------\n");
			printf("_____ACCESS GRANTED______\n");
			printf("--------------------------\n\n");
			while(repeat){
			printf("Following Are The Available Trains We Have:\n");
			printf("::::::::::::::::::::::::::::::::::::\n\n");
			printf("1.Green Line\n2.Tezgaam\n3.Awami Express\n4.Jinnah Express\n5.Exit\n\n");
			printf("::::::::::::::::::::::::::::::::::::\n\n");
			printf("Select: ");
			scanf("%d",&select_Airline);
			if(select_Airline==1){
			
			printf("\n::::::::::::::::::WELCOME TO GREEN LINE SECTION:::::::::::::::::\n\n");
				while(repeat){
				
				printf("\nFollowing Are The Actions You Can Perform:\n");
				printf("::::::::::::::::::::::::::::::::::::::::::\n\n");
				printf("1.Check Today's Train Routes\n2.Book A Seat\n3.Remove a Seat\n4.Exit\n");
				printf("\n::::::::::::::::::::::::::::::::::::\n");
				printf("\n");
				printf("Select: ");
				scanf("%d",&select_Airline_Mode);
				if(select_Airline_Mode==1){
					printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
					printf("Train Seat\t\t\t\tFrom\t\t\tTime\t\t\tRemarks\n");
					printf("------------------------------------------------------------------------------------------------------\n");
					printf("Green Line\t\t8256\t\tIslamabad\t\t5:40\t\t\tDelayed 7:00\n");
					printf("Tez Gaam\t\t2322\t\tLahore\t\t\t8:00\t\t\tOn Time\n");
					printf("Allama Iqbal Express\t1666\t\tKarachi\t\t\t2:00\t\t\tOn Time\n");
					printf("Awami Express\t\t8282\t\tIslamabad\t\t12:00\t\t\tOn Time\n");
					printf("Hazara Express\t\t7588\t\tQuetta\t\t\t11:00\t\t\tDelayed 2:00\n");
					printf("------------------------------------------------------------------------------------------------------\n");
					printf("\n");
				}
				else if(select_Airline_Mode==2){
					printf("---------------WELCOME TO SEAT BOOKING SECTION--------------------\n\n");
					int check = 0;
					int check2 = 0;
					printf("Please, Enter Your Nic Number: ");
						scanf("%d",&nic_Number);
						printf("Please, Enter Your Name: ");
						scanf("%s",&name_User);
						for (int i = 0; i < 3; i++) {
                			if (nic_Number == nic_Numbers[i]) {
                				check=1;
                    			printf("Please,Enter Your Location: ");
                    			scanf("%s", &location_User);
                    			printf("Please,Enter Your Destination: ");
                    			scanf("%s",user_Destination);
                    			for(int i = 0;i<7;i++){
                    				if(strcmp(user_Destination,location_Available[i])==0){
                    					check2 = 1;
                    					printf("\n----------------------\n");
                    			printf("Payment Methods:\n");
                    			printf("1. Cash\n2. Credit Card\n");
                    			printf("Select: ");
                    			scanf("%d", &payment_Method);

                    			if (payment_Method == 1) {
                        			printf("\n\nHere's Your Receipt!\n");
                        			printf("Pay At the counter Number 25, Thank You!!\n\n");
                        			break;
                				} else if (payment_Method == 2) {
                        			printf("Enter Credit Card No: ");
                        			scanf("%d", &creditcard_User);
                        			int validCard = 0;

                        			for (int i = 0; i < 3; i++) {
                            			if (creditcard_User == creditcard_Users[i]) {
                                			printf("\n\nPayment Received!\n");
                                			printf("Here is your Ticket!\n");
                                			printf("Thank You!!\n\n");
                                			num_Ticket++;
                                			ticket_Number+=1;
                                printf("_______________________________________________________________________\n");	
								printf("_____________________________TICKET____________________________________\n");
								printf("_______________________________________________________________________\n");
								printf("------------NAME: %s\n",name_User);
								printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
								printf("------------LOCATION: %s\n",location_User);
								printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
								printf("------------DESTINATION: %s\n",user_Destination);
								printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
								printf("------------TICKET NO: %d\n",ticket_Number);
								printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
								printf("------------TRAIN: GREEN LINE 1666MD\n");
								printf("_______________________________________________________________________\n\n");
                                			ticket_Nums[num_Ticket] = ticket_Number;
                                			validCard = 1;
                                			
                            			}
                        	}

                        if (!validCard) {
                            printf("Invalid Credit Card Number!\n");
                        }
                    }
				}
									
									
								}
                    			
                    			if (!check2) {
   									printf("\n\nPlease Enter a Valid Destination!\n\n");
									break;
								}
                    			
                	
							}
							if(!check){
								printf("\nInvalid Nic Number.\n\n");
								break;
							}
				}
			}
			else if(select_Airline_Mode==3){
				printf("---------------WELCOME TO REMOVE SEAT SECTION--------------------\n\n");
				int check = 0;
				printf("Please, Enter Your Nic Number: ");
            scanf("%d", &nic_Number);
            for (int i = 0; i < 2; i++) {
                if (nic_Number == nic_Numbers[i]) {
                    check = 1;
					printf("Enter Ticket Number: ");
                    scanf("%d", &ticket_No);
                    int ticketFound = 0;

                    for (int j = 0; j < 10; j++) {
                        if (ticket_No == ticket_Nums[j]) {
                            ticket_Nums[j] = 0; // Remove ticket
                            printf("Ticket ID Removed Successfully!!\n\n");
                            ticketFound = 1;
                            
                        }
                    }

                    if (!ticketFound) {
                    	printf("------------------------\n");
                        printf("No Ticket ID Found!\n");
                        printf("------------------------\n");
                    }
                }
                if(!check){
                	printf("\n\nInvalid Nic Number.\n\n");
                	break;
				}
            }
			}
			else if(select_Airline_Mode==5){
				printf("\n\nExiting.....\n\n");
				repeat--;
				
			}
		}
	}
	else if(select_Airline==2){
		printf("\n::::::::::::::::::WELCOME TO TEZGAAM SECTION:::::::::::::::::\n\n");
				while(repeat){
				
				printf("\nFollowing Are The Actions You Can Perform:\n");
				printf("::::::::::::::::::::::::::::::::::::::::::\n\n");
				printf("1.Check Today's Train Routes\n2.Book A Seat\n3.Remove a Seat\n4.Exit\n");
				printf("\n::::::::::::::::::::::::::::::::::::\n");
				printf("\n");
				printf("Select: ");
				scanf("%d",&select_Airline_Mode);
				if(select_Airline_Mode==1){
					printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
					printf("Train Seat\t\t\t\tFrom\t\t\tTime\t\t\tRemarks\n");
					printf("------------------------------------------------------------------------------------------------------\n");
					printf("Green Line\t\t8256\t\tIslamabad\t\t5:40\t\t\tDelayed 7:00\n");
					printf("Tez Gaam\t\t2322\t\tLahore\t\t\t8:00\t\t\tOn Time\n");
					printf("Allama Iqbal Express\t1666\t\tKarachi\t\t\t2:00\t\t\tOn Time\n");
					printf("Awami Express\t\t8282\t\tIslamabad\t\t12:00\t\t\tOn Time\n");
					printf("Hazara Express\t\t7588\t\tQuetta\t\t\t11:00\t\t\tDelayed 2:00\n");
					printf("------------------------------------------------------------------------------------------------------\n");
					printf("\n");
				}
				else if(select_Airline_Mode==2){
					printf("---------------WELCOME TO SEAT BOOKING SECTION--------------------\n\n");
					int check = 0;
					int check2 = 0;
					printf("Please, Enter Your Nic Number: ");
						scanf("%d",&nic_Number);
						printf("Please, Enter Your Name: ");
						scanf("%s",&name_User);
						for (int i = 0; i < 3; i++) {
                			if (nic_Number == nic_Numbers[i]) {
                				check=1;
                    			printf("Please,Enter Your Location: ");
                    			scanf("%s", &location_User);
                    			printf("Please,Enter Your Destination: ");
                    			scanf("%s",user_Destination);
                    			for(int i = 0;i<7;i++){
                    				if(strcmp(user_Destination,location_Available[i])==0){
                    					check2 = 1;
                    					printf("\n----------------------\n");
                    			printf("Payment Methods:\n");
                    			printf("1. Cash\n2. Credit Card\n");
                    			printf("Select: ");
                    			scanf("%d", &payment_Method);

                    			if (payment_Method == 1) {
                        			printf("\n\nHere's Your Receipt!\n");
                        			printf("Pay At the counter Number 25, Thank You!!\n\n");
                        			break;
                				} else if (payment_Method == 2) {
                        			printf("Enter Credit Card No: ");
                        			scanf("%d", &creditcard_User);
                        			int validCard = 0;

                        			for (int i = 0; i < 3; i++) {
                            			if (creditcard_User == creditcard_Users[i]) {
                                			printf("\n\nPayment Received!\n");
                                			printf("Here is your Ticket!\n");
                                			printf("Thank You!!\n\n");
                                			num_Ticket++;
                                			ticket_Number+=1;
                                printf("_______________________________________________________________________\n");	
								printf("_____________________________TICKET____________________________________\n");
								printf("_______________________________________________________________________\n");
								printf("------------NAME: %s\n",name_User);
								printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
								printf("------------LOCATION: %s\n",location_User);
								printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
								printf("------------DESTINATION: %s\n",user_Destination);
								printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
								printf("------------TICKET NO: %d\n",ticket_Number);
								printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
								printf("------------TRAIN: TEZGAAM 1666MD\n");
								printf("_______________________________________________________________________\n\n");
                                			ticket_Nums[num_Ticket] = ticket_Number;
                                			validCard = 1;
                                			
                            			}
                        	}

                        if (!validCard) {
                            printf("Invalid Credit Card Number!\n");
                        }
                    }
				}
									
									
								}
                    			
                    			if (!check2) {
   									printf("\n\nPlease Enter a Valid Destination!\n\n");
									break;
								}
                    			
                	
							}
							if(!check){
								printf("\nInvalid Nic Number.\n\n");
								break;
							}
				}
			}
			else if(select_Airline_Mode==3){
				printf("---------------WELCOME TO REMOVE SEAT SECTION--------------------\n\n");
				int check = 0;
				printf("Please, Enter Your Nic Number: ");
            scanf("%d", &nic_Number);
            for (int i = 0; i < 2; i++) {
                if (nic_Number == nic_Numbers[i]) {
                    check = 1;
					printf("Enter Ticket Number: ");
                    scanf("%d", &ticket_No);
                    int ticketFound = 0;

                    for (int j = 0; j < 10; j++) {
                        if (ticket_No == ticket_Nums[j]) {
                            ticket_Nums[j] = 0; // Remove ticket
                            printf("Ticket ID Removed Successfully!!\n\n");
                            ticketFound = 1;
                            
                        }
                    }

                    if (!ticketFound) {
                    	printf("------------------------\n");
                        printf("No Ticket ID Found!\n");
                        printf("------------------------\n");
                    }
                }
                if(!check){
                	printf("\n\nInvalid Nic Number.\n\n");
                	break;
				}
            }
			}
			else if(select_Airline_Mode==4){
				printf("\n\nExiting.....\n\n");
				repeat--;
			}
		}
	}
	else if(select_Airline==3){
		printf("\n::::::::::::::::::WELCOME TO AWAMI EXPRESS SECTION:::::::::::::::::\n\n");
				while(repeat){
				
				printf("\nFollowing Are The Actions You Can Perform:\n");
				printf("::::::::::::::::::::::::::::::::::::::::::\n\n");
				printf("1.Check Today's Train Routes\n2.Book A Seat\n3.Remove a Seat\n4.Exit\n");
				printf("\n::::::::::::::::::::::::::::::::::::\n");
				printf("\n");
				printf("Select: ");
				scanf("%d",&select_Airline_Mode);
				if(select_Airline_Mode==1){
					printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
					printf("Train Seat\t\t\t\tFrom\t\t\tTime\t\t\tRemarks\n");
					printf("------------------------------------------------------------------------------------------------------\n");
					printf("Green Line\t\t8256\t\tIslamabad\t\t5:40\t\t\tDelayed 7:00\n");
					printf("Tez Gaam\t\t2322\t\tLahore\t\t\t8:00\t\t\tOn Time\n");
					printf("Allama Iqbal Express\t1666\t\tKarachi\t\t\t2:00\t\t\tOn Time\n");
					printf("Awami Express\t\t8282\t\tIslamabad\t\t12:00\t\t\tOn Time\n");
					printf("Hazara Express\t\t7588\t\tQuetta\t\t\t11:00\t\t\tDelayed 2:00\n");
					printf("------------------------------------------------------------------------------------------------------\n");
					printf("\n");
				}
				else if(select_Airline_Mode==2){
					printf("---------------WELCOME TO SEAT BOOKING SECTION--------------------\n\n");
					int check = 0;
					int check2 = 0;
					printf("Please, Enter Your Nic Number: ");
						scanf("%d",&nic_Number);
						printf("Please, Enter Your Name: ");
						scanf("%s",&name_User);
						for (int i = 0; i < 3; i++) {
                			if (nic_Number == nic_Numbers[i]) {
                				check=1;
                    			printf("Please,Enter Your Location: ");
                    			scanf("%s", &location_User);
                    			printf("Please,Enter Your Destination: ");
                    			scanf("%s",user_Destination);
                    			for(int i = 0;i<7;i++){
                    				if(strcmp(user_Destination,location_Available[i])==0){
                    					check2 = 1;
                    					printf("\n----------------------\n");
                    			printf("Payment Methods:\n");
                    			printf("1. Cash\n2. Credit Card\n");
                    			printf("Select: ");
                    			scanf("%d", &payment_Method);

                    			if (payment_Method == 1) {
                        			printf("\n\nHere's Your Receipt!\n");
                        			printf("Pay At the counter Number 25, Thank You!!\n\n");
                        			break;
                				} else if (payment_Method == 2) {
                        			printf("Enter Credit Card No: ");
                        			scanf("%d", &creditcard_User);
                        			int validCard = 0;

                        			for (int i = 0; i < 3; i++) {
                            			if (creditcard_User == creditcard_Users[i]) {
                                			printf("\n\nPayment Received!\n");
                                			printf("Here is your Ticket!\n");
                                			printf("Thank You!!\n\n");
                                			num_Ticket++;
                                			ticket_Number+=1;
                                printf("_______________________________________________________________________\n");	
								printf("_____________________________TICKET____________________________________\n");
								printf("_______________________________________________________________________\n");
								printf("------------NAME: %s\n",name_User);
								printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
								printf("------------LOCATION: %s\n",location_User);
								printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
								printf("------------DESTINATION: %s\n",user_Destination);
								printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
								printf("------------TICKET NO: %d\n",ticket_Number);
								printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
								printf("------------TRAIN: AWAMI EXPRESS 1666MD\n");
								printf("_______________________________________________________________________\n\n");
                                			ticket_Nums[num_Ticket] = ticket_Number;
                                			validCard = 1;
                                			
                            			}
                        	}

                        if (!validCard) {
                            printf("Invalid Credit Card Number!\n");
                        }
                    }
				}
									
									
								}
                    			
                    			if (!check2) {
   									printf("\n\nPlease Enter a Valid Destination!\n\n");
									break;
								}
                    			
                	
							}
							if(!check){
								printf("\nInvalid Nic Number.\n\n");
								break;
							}
				}
			}
			else if(select_Airline_Mode==3){
				printf("---------------WELCOME TO REMOVE SEAT SECTION--------------------\n\n");
				int check = 0;
				printf("Please, Enter Your Nic Number: ");
            scanf("%d", &nic_Number);
            for (int i = 0; i < 2; i++) {
                if (nic_Number == nic_Numbers[i]) {
                    check = 1;
					printf("Enter Ticket Number: ");
                    scanf("%d", &ticket_No);
                    int ticketFound = 0;

                    for (int j = 0; j < 10; j++) {
                        if (ticket_No == ticket_Nums[j]) {
                            ticket_Nums[j] = 0; // Remove ticket
                            printf("Ticket ID Removed Successfully!!\n\n");
                            ticketFound = 1;
                            
                        }
                    }

                    if (!ticketFound) {
                    	printf("------------------------\n");
                        printf("No Ticket ID Found!\n");
                        printf("------------------------\n");
                    }
                }
                if(!check){
                	printf("\n\nInvalid Nic Number.\n\n");
                	break;
				}
            }
			}
			else if(select_Airline_Mode==4){
				printf("\n\nExiting.....\n\n");
				repeat--;
			}
		}
	}
	else if(select_Airline==4){
		printf("\n::::::::::::::::::WELCOME TO JINNAH EXPRESS SECTION:::::::::::::::::\n\n");
				while(repeat){
				
				printf("\nFollowing Are The Actions You Can Perform:\n");
				printf("::::::::::::::::::::::::::::::::::::::::::\n\n");
				printf("1.Check Today's Train Routes\n2.Book A Seat\n3.Remove a Seat\n4.Exit\n");
				printf("\n::::::::::::::::::::::::::::::::::::\n");
				printf("\n");
				printf("Select: ");
				scanf("%d",&select_Airline_Mode);
				if(select_Airline_Mode==1){
					printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
					printf("Train Seat\t\t\t\tFrom\t\t\tTime\t\t\tRemarks\n");
					printf("------------------------------------------------------------------------------------------------------\n");
					printf("Green Line\t\t8256\t\tIslamabad\t\t5:40\t\t\tDelayed 7:00\n");
					printf("Tez Gaam\t\t2322\t\tLahore\t\t\t8:00\t\t\tOn Time\n");
					printf("Allama Iqbal Express\t1666\t\tKarachi\t\t\t2:00\t\t\tOn Time\n");
					printf("Awami Express\t\t8282\t\tIslamabad\t\t12:00\t\t\tOn Time\n");
					printf("Hazara Express\t\t7588\t\tQuetta\t\t\t11:00\t\t\tDelayed 2:00\n");
					printf("------------------------------------------------------------------------------------------------------\n");
					printf("\n");
				}
				else if(select_Airline_Mode==2){
					printf("---------------WELCOME TO SEAT BOOKING SECTION--------------------\n\n");
					int check = 0;
					int check2 = 0;
					printf("Please, Enter Your Nic Number: ");
						scanf("%d",&nic_Number);
						printf("Please, Enter Your Name: ");
						scanf("%s",&name_User);
						for (int i = 0; i < 3; i++) {
                			if (nic_Number == nic_Numbers[i]) {
                				check=1;
                    			printf("Please,Enter Your Location: ");
                    			scanf("%s", &location_User);
                    			printf("Please,Enter Your Destination: ");
                    			scanf("%s",user_Destination);
                    			for(int i = 0;i<7;i++){
                    				if(strcmp(user_Destination,location_Available[i])==0){
                    					check2 = 1;
                    					printf("\n----------------------\n");
                    			printf("Payment Methods:\n");
                    			printf("1. Cash\n2. Credit Card\n");
                    			printf("Select: ");
                    			scanf("%d", &payment_Method);

                    			if (payment_Method == 1) {
                        			printf("\n\nHere's Your Receipt!\n");
                        			printf("Pay At the counter Number 25, Thank You!!\n\n");
                        			break;
                				} else if (payment_Method == 2) {
                        			printf("Enter Credit Card No: ");
                        			scanf("%d", &creditcard_User);
                        			int validCard = 0;

                        			for (int i = 0; i < 3; i++) {
                            			if (creditcard_User == creditcard_Users[i]) {
                                			printf("\n\nPayment Received!\n");
                                			printf("Here is your Ticket!\n");
                                			printf("Thank You!!\n\n");
                                			num_Ticket++;
                                			ticket_Number+=1;
                                printf("_______________________________________________________________________\n");	
								printf("_____________________________TICKET____________________________________\n");
								printf("_______________________________________________________________________\n");
								printf("------------NAME: %s\n",name_User);
								printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
								printf("------------LOCATION: %s\n",location_User);
								printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
								printf("------------DESTINATION: %s\n",user_Destination);
								printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
								printf("------------TICKET NO: %d\n",ticket_Number);
								printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
								printf("------------TRAIN: JINNAH EXPRESS 1666MD\n");
								printf("_______________________________________________________________________\n\n");
                                			ticket_Nums[num_Ticket] = ticket_Number;
                                			validCard = 1;
                                			
                            			}
                        	}

                        if (!validCard) {
                            printf("Invalid Credit Card Number!\n");
                        }
                    }
				}
									
									
								}
                    			
                    			if (!check2) {
   									printf("\n\nPlease Enter a Valid Destination!\n\n");
									break;
								}
                    			
                	
							}
							if(!check){
								printf("\nInvalid Nic Number.\n\n");
								break;
							}
				}
			}
			else if(select_Airline_Mode==3){
				printf("---------------WELCOME TO REMOVE SEAT SECTION--------------------\n\n");
				int check = 0;
				printf("Please, Enter Your Nic Number: ");
            scanf("%d", &nic_Number);
            for (int i = 0; i < 2; i++) {
                if (nic_Number == nic_Numbers[i]) {
                    check = 1;
					printf("Enter Ticket Number: ");
                    scanf("%d", &ticket_No);
                    int ticketFound = 0;

                    for (int j = 0; j < 10; j++) {
                        if (ticket_No == ticket_Nums[j]) {
                            ticket_Nums[j] = 0; // Remove ticket
                            printf("Ticket ID Removed Successfully!!\n\n");
                            ticketFound = 1;
                            
                        }
                    }

                    if (!ticketFound) {
                    	printf("------------------------\n");
                        printf("No Ticket ID Found!\n");
                        printf("------------------------\n");
                    }
                }
                if(!check){
            		printf("\n\nInvalid Nic Number\n\n");
					break;
				}
            }
            
			}
			else if(select_Airline_Mode==4){
				printf("\n\nExiting.....\n\n");
				repeat--;
			}
		}
	}
	else if(select_Airline==5){
		printf("\n\nExiting.....\n\n");
		repeat--;
	}
}
}
}
	
}

else if(select_Transport==3){
	
		printf("\n::::::::::::::::::WELCOME TO CAR TRANSPORT SYSTEM:::::::::::::::\n\n");
		printf("Following are the Car Transports we have:\n");
		printf("::::::::::::::::::::::::::::::::::::::::::\n\n");
		printf("1.White Cab\n2.Karachi Taxi\n3.Exit\n");
		printf("\n::::::::::::::::::::::::::::::::::::::::::\n\n");
		printf("Select: ");
		scanf("%d",&car_Transport);
		if(car_Transport== 1){
			printf("\n::::::::::::::WELCOME TO WHITE CAB TRANSPORT:::::::::::::\n\n");
			printf("Following are the actions:\n\n");
			printf("::::::::::::::::::::::::::::::::::::::::::\n\n");
			printf("1.Book a Cab\n2.Remove a Cab\n3.Exit\n");
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n\n");
			printf("Select: ");
			scanf("%d",&car_Transport_Mode);
			if(car_Transport_Mode==1){
				printf("\n:::::::::::::::::::WELCOME TO BOOK A TAXI SECTION::::::::::::::::::::::\n\n");
				int check2 = 0;
				printf("Enter Your Nic Number: ");
				scanf("%d",&nic_Number);
				for(int i = 0;i<2;i++){
					if(nic_Number==nic_Numbers[i]){
						check2 = 1;
						int found = 0;
						printf("Enter Your Name: ");
						scanf("%s",name_User);
						printf("Enter your destination: ");
						scanf("%s",&user_Destination);
						for(int i = 0;i<2;i++){
							if(strcmp(user_Destination, destinations_Car[i]) == 0){
								found = 1;
								printf("Select Payment Method:\n");
								printf("1.Credit Card\n2.Cash\n");
								printf("Select: ");
								scanf("%d",&payment_Method);
								if(payment_Method==2){
									printf("Here's Your Reciept!\n");
									printf("Pay At the counter Number 25, Thank You!!\n\n");
								}
								else if(payment_Method==1){
									int validCard = 0;
									printf("Enter Credit Card No: ");
									scanf("%d",&creditcard_User);
									for(int i = 0;i<=2;i++){
										if(creditcard_User==creditcard_Users[i]){
											
											printf("Payment Recieved!\n");
											printf("Here is your Cab Ticket!\n");
											// Draw ticket!
											printf("Thank You!!\n\n");
											num_Ticket++;
											ticket_Number+=1;
											printf("_______________________________________________________________________\n");	
											printf("_____________________________TICKET____________________________________\n");
											printf("_______________________________________________________________________\n");
											printf("------------NAME: %s\n",name_User);
											printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
											printf("------------DESTINATION: %s\n",user_Destination);
											printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
											printf("------------TICKET NO: %d\n",ticket_Number);
											printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
											printf("_______________________________________________________________________\n");
                                			ticket_Nums[num_Ticket] = ticket_Number;
                                			validCard = 1;
                                			
										}
										if (!validCard) {
                            				printf("Invalid Credit Card Number!\n");
                        				}
									}
								}
							}
						}
					}
					if(!check2){
								printf("\nInvalid Nic Number.\n\n");
								break;
							}
				}
			}
			else if(car_Transport_Mode==2){
				printf("---------------WELCOME TO REMOVE SEAT SECTION--------------------\n\n");
				int check = 0;
				int check2 = 0;
				printf("Please, Enter Your Nic Number: ");
            scanf("%d", &nic_Number);
            for (int i = 0; i < 2; i++) {
                if (nic_Number == nic_Numbers[i]) {
                	check=1;
                    printf("Enter Ticket Number: ");
                    scanf("%d", &ticket_No);
                    int ticketFound = 0;

                    for (int j = 0; j < 10; j++) {
                        if (ticket_No == ticket_Nums[j]) {
                            check2 = 1;
							ticket_Nums[j] = 0; // Remove ticket
                            printf("Ticket ID Removed Successfully!!\n\n");
                            ticketFound = 1;
                            
                        }
			}
			if(!check2){
				printf("\n\nNo Ticket ID Found..\n\n");
				break;
			}
			
		}
		if(!check){
			printf("\n\nPlease Enter Valid Nic Number.\n\n");
			break;
		}
	}
}
		

} else if(car_Transport==2){
			printf("\n::::::::::::::WELCOME TO KARACHI TAXI TRANSPORT:::::::::::::\n\n");
			printf("Following are the actions:\n\n");
			printf("::::::::::::::::::::::::::::::::::::::::::\n");
			printf("\n1.Book a Taxi\n2.Remove a Taxi\n3.Exit\n");
			printf("\n::::::::::::::::::::::::::::::::::::::::::\n\n");
			printf("Select: ");
			scanf("%d",&car_Transport_Mode);
			if(car_Transport_Mode==1){
				printf("\n:::::::::::::::::::WELCOME TO BOOK A TAXI SECTION::::::::::::::::::::::\n\n");
				int check2 = 0;
				printf("Enter Your Nic Number: ");
				scanf("%d",&nic_Number);
				int found = 0;
				for(int i = 0;i<2;i++){
					if(nic_Number==nic_Numbers[i]){
						check2 = 1;
						printf("Enter Your Name: ");
						scanf("%s",name_User);
						printf("Enter your destination: ");
						scanf("%s",&user_Destination);
						for(int i = 0;i<2;i++){
							if(strcmp(user_Destination, destinations_Car[i]) == 0){
								found = 1;
								printf("Select Payment Method:\n");
								printf("1.Credit Card\n2.Cash\n");
								printf("Select: ");
								scanf("%d",&payment_Method);
								if(payment_Method==2){
									printf("Here's Your Reciept!\n");
									printf("Pay At the counter Number 25, Thank You!!\n\n");
								}
								else if(payment_Method==1){
									int validCard=0;
									printf("Enter Credit Card No: ");
									scanf("%d",&creditcard_User);
									for(int i = 0;i<=2;i++){
										if(creditcard_User==creditcard_Users[i]){
											printf("Payment Recieved!\n");
											printf("Here is your Taxi Ticket!\n");
											printf("Thank You!!\n\n");
											num_Ticket++;
											ticket_Number+=1;
                                			printf("_______________________________________________________________________\n");	
											printf("_____________________________TICKET____________________________________\n");
											printf("_______________________________________________________________________\n");
											printf("------------NAME: %s\n",name_User);
											printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
											printf("------------DESTINATION: %s\n",user_Destination);
											printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
											printf("------------TICKET NO: %d\n",ticket_Number);
											printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
											printf("_______________________________________________________________________\n");
                                			ticket_Nums[num_Ticket] = ticket_Number;
                                			
                                			validCard = 1;
                                			
										}
										if (!validCard) {
                            				printf("Invalid Credit Card Number!\n");
                        				}
									}
								}
							}
						}
					}
					if(!check2){
								printf("\nInvalid Nic Number.\n\n");
								break;
							}
				}
				
			}
		
	else if(car_Transport_Mode==2){
				printf("---------------WELCOME TO REMOVE SEAT SECTION--------------------\n\n");
				int check = 0;
				int check2 = 0;
				printf("Please, Enter Your Nic Number: ");
            scanf("%d", &nic_Number);
            for (int i = 0; i < 2; i++) {
                if (nic_Number == nic_Numbers[i]) {
                	check = 1;
                    printf("Enter Ticket Number: ");
                    scanf("%d", &ticket_No);
                    int ticketFound = 0;

                    for (int j = 0; j < 10; j++) {
                        if (ticket_No == ticket_Nums[j]) {
                            check2 = 1;
							ticket_Nums[j] = 0; // Remove ticket
                            printf("Ticket ID Removed Successfully!!\n\n");
                            ticketFound = 1;
                            
                        }
                        
			}
			if(!check2){
                        printf("\n\nNo Ticket ID Found...\n\n");
						
				}
			
		}
		if(!check){
			printf("\n\nPlease Enter Valid Nic Number.\n\n");
			break;
		}
	}
	}
}
}
else if(select_Transport==4){
	printf("\n\nBA BAYEEE!!!\n\n");
	break;
} 
else{
	printf("\n\nPLEASE ENTER VALID COMMAND!\n\n");
}
}


	return 0;
}
