#include<stdio.h> 
#include<conio.h>
int main() 
{
	int i,j,n,time,remain,flag=0,ts; 
     int sum_wait=0,sum_turnaround=0,at[10],bt[10],rt[10]; 
     printf(".................FOR STUDENT......................\n\n");
     printf("Enter no of queries : "); 
     scanf("%d",&n); 
     printf("\n");
     remain=n;   
     for(i=0;i<n;i++)
    {     
		printf("Enter  arrival time and burst time for student S%d :",i+1);                 
		scanf("%d",&at[i]);    
        scanf("%d",&bt[i]);     
        rt[i]=bt[i];        
	 }  
   		printf("Enter time slice ");   
   		scanf("%d",&ts);   
   		printf("\n\nProcess\t|Turnaround time|waiting time\n\n");                          	
		for(time=0,i=0;remain!=0;)   
       	{     
		   if(rt[i]<=ts && rt[i]>0)     
            {       
				time+=rt[i];       
				rt[i]=0;       
				flag=1;     
			}     
            else if(rt[i]>0)     
            {       
				rt[i]-=ts;       
				time+=ts;     
			}     
            if(rt[i]==0 && flag==1)     
            {       
				remain--;       
              	printf("P[%d]\t|\t%d\t|\t%d\n",i+1,time-at[i],time-at[i]-bt[i]);                     
				sum_wait+=time-at[i]-bt[i];       
              	sum_turnaround+=time-at[i];       
              	flag=0;     
			}    
            if(i==n-1)       
            i=0;   
            else if(at[i+1]<=time)      
            i++;   
            else       
				i=0; 
				int z1,z2;  
		}  
		int z1,z2;
 		printf("\nTime spent on queries = %f\n",sum_wait*1.0/n);   
		printf("Query time = %f",sum_turnaround*1.0/n);    
		

	int k,r,m,time1,remain1,temp=0,tsp;
	int sum_wait1=0,sum_turnaround1=0,atp[10],btp[10],rtp[10];
	printf("\n\n ....................FOR FACULTY......................\n\n");
	printf("enter no. of faculties  ");
	scanf("%d",&m);
	printf("\n");
	remain1=m;
	for(k=0;k<m;k++)
	{
		printf("enter arrival time and burst time for faculty F%d ",k+1);
		scanf("%d",&atp[k]);
		scanf("%d",&btp[k]);
		rtp[k]=btp[k];
	}
	printf("enter time slice");
	scanf("%d",&tsp);
	printf("\n\nProcess\t|Turnaround time|waiting time\n\n"); 
	for(time1=0,k=0;remain1!=0;) 
	{
		if(rtp[k]<=tsp && rtp[k]>0)
		{
			time1+=rtp[k];
			rtp[k]=0;       
			temp=1; 
		}
		else if(rtp[k]>0)
		{
			rtp[k]-=tsp;
			time1+=tsp; 
		}
		if(rtp[k]==0 && temp==1)
		{
			remain1--;
			printf("P[%d]\t|\t%d\t|\t%d\n",k+1,time1-atp[k],time1-atp[k]-btp[k]);
			sum_wait1+=time1-atp[k]-btp[k];   
			sum_turnaround1+=time1-atp[k];
			temp=0;
		}
		if(k==m-1)
		k=0;
		else if(atp[k+1]<=time1)
		k++;
		else
		k=0;
		
	}
	printf("\nTime spent on queries = %f\n",sum_wait1*1.0/m);
	printf("Query time = %f",sum_turnaround1*1.0/m);
	float d1,d2;
	d1=(sum_wait1*1.0/m)+(sum_wait*1.0/n);
	d2=(sum_turnaround1*1.0/m)+(sum_turnaround*1.0/n);
	printf("\n\n...............TOTAL TIME..................\n");
	printf("\ntotal time sudesh spent on handling the queries : %f",d1);
    printf("\ntotal query time : %f",d2);
    return 0;
}
