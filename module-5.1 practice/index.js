function sum(numbers) {
    let total = 0;
  for (const number of numbers) {
      total += number;
    }
    return total;
}
const numbers = [1, 2, 3, 4, 5]
const result = sum(numbers);
console.log(result)

function max(numbers) {
    let maxNumber = 0;
    for (const max of numbers) {
        if (max > maxNumber) {
            maxNumber = max;
        }
        
    }
    return maxNumber;
}   

const maxnum = [1, 3, 4, 5, 8, 9];
const resultofmaxnum = max(maxnum);
console.log(resultofmaxnum);


function evenNumbers(numbers) {
    const evnNumber = [];
    for (const num of numbers) {
        
        if (num % 2 == 0) {
            evnNumber.push(num);
        }
    }
    return evnNumber;
}


const evnarray = [2, 1, 5, 6, 7, 8, 11];
const evnarr = evenNumbers(evnarray);
console.log(evnarr);


let myName = 'rizwan';
function reverseString(string) {
    // if (string === "") {
    //     return "";
    // } else {
    //     return reverseString(string.substr(1)) + string.charAt(0);
    // }
    return string.split('').reverse().join('');
    
}

console.log(reverseString(myName));
