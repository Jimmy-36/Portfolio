// function calculate(choice)
// {
//     let n1 = parseFloat(document.getElementById("num1").value);
//     let n2 = parseFloat(document.getElementById("num2").value);
//     let result;
//     let ch = choice;

//     switch(ch)
//     {
//         case "1":
//             result = n1+ n1;
//             break;
//         case "2":
//             result = n1 - n2;
//             break;
//         case "3":
//             result = n1 * n2;
//             break;
//         case "4":
//             result = n1 / n2;
//             break;
//         case "5":
//             result = n1 % n2;
//             break;
//     }
//     document.getElementById("result").value = result
// }
function dis(val) //The script for the calculator was gotten from https://www.geeksforgeeks.org/html-calculator/
{
    document.getElementById("result").value+=val
}
           
//function thatwill evaluate the digit inputed and give a result
function solve()
{
    let x = document.getElementById("result").value
    let y = eval(x)
    document.getElementById("result").value = y
}
//function for the clear button
function clr()
{
    document.getElementById("result").value = " "
}