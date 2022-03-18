abstract class vehicleone
{
	int  speed=90;
	public abstract void distance();
}

interface vehicletwo
{
	int distance=100;
	public void speed();
}

class Vehicle extends vehicleone implements vehicletwo
{
	public void distance()
        {
		int  distance=speed*100; 
		System.out.println("distance travelled is :"+distance);
	}
	public void speed()
        {
	        int speed=distance/100;
	}
}

class inheritance
{
	public static void main(String args[])
        {
	Vehicle obj=new Vehicle();	
                System.out.println("Vehicle");
		obj.distance();
		obj.speed();
	}
}
 
