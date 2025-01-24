import java.lang.*;

public class virus {
  public static String s1 = "12345678";
  public static String s2 = "12345678";
  public static String s3 = "12345678";
  public static String s4 = "12345678";
  public static String virus;
  public static int virusLength = 3;
  public static ArrayList<String> substr = new ArrayList<>();
  public static ArrayList<String> ck = new HashMap<>();
  public static int endFl = 0;
  public static Object flLock = new Object();
  public static void thread1(){
    int dist = virusLength<4?1:virusLength/2-1;
    boolean flag = false;
    for(int i=dist; i<s1.length();i+=flag?virusLength:dist) {
      substr.append(s1.substring(i,i+virusLength));
      flag=~flag;
    }
    synchronized(flLock) {
      endFl|=1;
    }
  }
  public static void thread2(){
  	int i=0;
    while(endFl&1 != 1) {
      if(substr.length()<=i) continue;
      String cur=substr.get(i);
      if(s2.contains(cur)) ck.append(cur);
      i++;
    }
    synchronized(flLock) {
      endFl|=2;
    }
  }
  public static void thread3(){
    int i = 0;
    while(endFl&2 != 2) {
      if(ck.length()<=i) continue;
      String cur=ck.get(i);
      i++;
      if(!s3.contains(cur) || !s4.contains(cur)) continue;
      synchronized(flLock) {
        endFl|=4;
      }
      virus = cur;
      break;
    }
  }
}
