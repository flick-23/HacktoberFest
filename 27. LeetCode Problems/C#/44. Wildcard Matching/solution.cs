using System.Collections.Generic;
using System.Linq;
using System;
using System.Text;

namespace WildcardMatching
{
   /// <summary>
   /// more on https://github.com/pakosel/leetcode-solutions
   /// </summary>
   public class Solution
   {
      public bool IsMatch(string s, string p)
      {
         int sLen = s.Length;
         int pLen = p.Length;
         bool[,] memo = new bool[pLen + 1, sLen + 1];

         memo[0, 0] = true;
         for (int i = 1; i <= pLen; i++)
            memo[i, 0] = p[i - 1] == '*' ? memo[i - 1, 0] : false;

         for (int i = 1; i <= pLen; i++)
            for (int j = 1; j <= sLen; j++)
            {
               if (s[j - 1] == p[i - 1] || p[i - 1] == '?')
                  memo[i, j] = memo[i - 1, j - 1];
               else if (p[i - 1] == '*')
                  memo[i, j] = memo[i - 1, j] || memo[i, j - 1];
            }

         return memo[pLen, sLen];
      }
   }
}