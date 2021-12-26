using System;
using System.Collections.Generic;

namespace Lab9
{
    class Program
    {
        static void Main(string[] args)
        {
            string input;
            int number;
            List<string> output = new List<string>();
            input = GetInputString();
            number = GetNumberOfLetters();
            output = DeleteWordsShorterThanNumber(input, number);
            DisplayOutput(output);
        }

        static string GetInputString()
        {
            string input;
            Console.WriteLine("Enter your string ");
            input = Console.ReadLine();
            return input;
        }

        static int GetNumberOfLetters()
        {
            int number;
            Console.WriteLine("Enter the number of letters ");
            number = Convert.ToInt32(Console.ReadLine());
            return number;
        }

        static List<string> DeleteWordsShorterThanNumber (string input, int number)
        {
            string[] words;
            char[] letters;
            List<string> output = new List<string>();
            words = input.Split(" ");
            for (int i = 0; i < words.Length; i++)
            {
                letters = words[i].ToCharArray();
                if (letters.Length >= number)
                {
                    output.Add(words[i]);
                }
            }
            return output;
        }

        static void DisplayOutput(List<string> output)
        {
            for (int i = 0; i < output.Count; i++)
            {
                Console.Write(output[i] + " ");
            }
        }
    }
}