#include <stdio.h>

int main()
{
int n;
int arr[n][n];


printf("Enter number of nodes\n");
scanf("%d",&n);


for (int i = 0; i < n; ++i)
{
for (int j = 0; j < n; ++j)
{
printf("Is there any vertex between %d and %d \n",i+1,j+1);
printf("If yes press 1\nIf no press 0\n");

scanf("%d", &arr[i][j]);

printf("arr[%d][%d] = %d \n",i,j,arr[i][j]);


}
}

for (int i = 0; i < n; ++i)
{
for (int j = 0; j < n; ++j)
{
printf("arr[%d][%d] = %d \n",i,j,arr[i][j]);
}
}
return 0;
}
