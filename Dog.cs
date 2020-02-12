using System;


namespace Dog
{
    class Dog
    {
        //declaring variables
        public string name;
        public string owner;
        public int age;
        public enum gender
        {
            Male, Female
        }
        public gender Gender;
        // method for gender
        public static string getGender(gender Gender)
        {
            if (Gender == gender.Male)
            {
                return "His";
            }
            else
            {
                return "Her";
            }
        }
        // function to bark
        public void Bark(int bark)
        {

            for (int i = 0; i < bark; i++)
            {
                Console.WriteLine("Woof!");
            }
        }
        // create the Dog constructor and assign the variables
        public Dog(string dogName, string ownerName,int dogAge, gender dogGender)
        {
            name = dogName;
            age = dogAge;
            owner = ownerName;
            Gender = dogGender;
        }
        public string GetTag()
        {
            //The value of heShe will depend on his_Her
            string his_Her = getGender(Gender);
            string heShe;
            if (his_Her == "His")
            {
                heShe = "he";
            }
            else
            {
                heShe = "she";
            }
           //print this to main
            return ($"If lost, call {owner}. {his_Her} name is {name} and {heShe} is {age} years old. ");
        }

        //This is the main function
        static void Main(string[] args)
        {

            Dog puppy = new Dog("Orion", "Shawn", 1, gender.Male);
            puppy.Bark(1);
            Console.WriteLine(puppy.GetTag());
            Dog myDog = new Dog("Lileu", "Dale", 4, gender.Female);
            myDog.Bark(2);
            Console.WriteLine(myDog.GetTag());
            Console.ReadKey();
        }

    }

}
