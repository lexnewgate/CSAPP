using System;
using System.Collections.Generic;

namespace BitsInts
{
    class Program
    {
        static void Main(string[] args)
        {
            BasicOps.PrintTruncating();
        }
    }


    class BasicOps
    {

        public static void PrintTruncating()
        {
            UInt64 a = unchecked((ulong) ~0);
            Console.WriteLine( Convert.ToString((long) a,2));
            uint b =(uint) a;
            Console.WriteLine( Convert.ToString(b,2));





        }

        public static void PrintCasting()
        {
            int x;
            uint y;
            //var z = x + y; //no implicit casting in csharp 
        }

        //about shifting 
        //first operand type remains; sec should be int32 and less than size of width of first operand
        public static void PrintShift(UInt32 val)
        {
            for (int i = 0; i < sizeof(UInt32)*8+100; i++)
            {
                Console.WriteLine($"shift"+ $"{i}: ".PadLeft(5,'0')+ Convert.ToString(val,2).PadLeft(sizeof(UInt32)*8,'0'));
                val <<= 1;
            }

        }

        public static void PrintBasicOps()
        {
            var one = 0b1;
            var zero = 0b0;

            var operands = new List<int> { zero, one };
            var ops = new List<Func<int, int, int>>
            {
                (x, y) => x&y,
                (x,y)=>x|y,
                (x,y)=> (int)(~x & 1),
                (x,y)=>x^y
            };

            for (int i = 0; i < ops.Count; i++)
            {
                for (int j = 0; j < operands.Count; j++)
                {
                    for (int k = 0; k < operands.Count; k++)
                    {
                        var op = ops[i];
                        var operand1 = operands[j];
                        var operand2 = operands[k];

                        string x = $"{i}th op :  ({operand1},{operand2})=>  {ops[i].Invoke(operand1, operand2)}";
                        Console.WriteLine(x);
                    }
                }

                Console.WriteLine();
            }
        }
    }
}
