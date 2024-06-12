public abstract class Bike
{
    private string Model {
        get;
        set;

    }
    protected abstract void Display();
}


Public sealed class Hond{
    public int speed
    {
        get;
        set;
    }=160
    protected override void Display()
    {
        Console.WriteLine(Model);
    }
}

class Program
{
    public static void main()
    {
        Bike bike = new Bike();
        Bike bike = new Hond();
        bike.display();
        Console.WriteLine(bike.Speed);
    }
}
Public class Honda4: Hond
{
    
}