/*
       Identify the problem here and debug the program.
*/

public class Problem4 {

    class A{
        void foo(){
            System.out.println("Inside Class A");
        }
    }

    class B extends A{

        void foo(){
            System.out.println("Inside Class B");
        }
    }

    class C extends A{
        void foo(){
            System.out.println("Inside Class C");
        }
    }

    class D extends B, C{
        void foo(){
            System.out.println("Inside Class D");
        }
    }

    public static void main(String[] args) {

        D d = new D();
        d.foo();
    }
}

