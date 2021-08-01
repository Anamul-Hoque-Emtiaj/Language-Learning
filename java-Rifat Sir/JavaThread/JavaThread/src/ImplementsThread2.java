class NewThread3 implements Runnable {
    public void run() {
        try {
            for(int i = 5; i > 0; i--) {
                System.out.println("Child Thread: " + i);
                Thread.sleep(500);
            }
        } catch (InterruptedException e) {
            System.out.println("Child interrupted.");
        }
        System.out.println("Exiting child thread.");
    }
}

public class ImplementsThread2 {
    public static void main(String[] args) {
        Runnable r = new NewThread3();
        Thread t = new Thread(r);
        t.start();
        Thread t1 = new Thread(() -> {
            try {
                for(int i = 5; i > 0; i--) {
                    System.out.println("main Thread: " + i);
                    Thread.sleep(500);
                }
            } catch (InterruptedException e) {
                System.out.println("main interrupted.");
            }
        });
        t1.start();
        System.out.println(t.getName());
        System.out.println(t1.getName());
    }
}