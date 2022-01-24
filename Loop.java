class exception{
       private int a,b;
       public int get()
         {
            System.out.println("Enter any two integer values for division");
            Scanner sc=new Scanner(System.in);
            a=sc.nextInt();
            b=sc.nextInt();
         }
       public void show()
          {
             System.out.println(a/b);
          }
      }
public class main{
     public static void main(String[] args)
         {
           try{
                exception obj=new exception();
                 obj.get();
                 obj.show();
              }
           catch(ArithmeticException e){
			      System.out.println(" You have entered something wrong please try again");
				  main(String[] args);
               }
	     }


}