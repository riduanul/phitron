function sumofTwoNumbers(arry, sum){
 for(let firstIndex = 0; firstIndex<arry.length-1; firstIndex++){
    let firstNumber = arry[firstIndex];
    let len = arry.length;
    let minuslen = arry.length-1;
    console.log(len, minuslen);
    for(let secondIndex = firstIndex + 1; secondIndex < arry.length; secondIndex++){
        let secondNumber = arry[secondIndex];

        if(firstNumber + secondNumber === sum){
            return [firstNumber, secondNumber];
        }
    }
 }
 return [];   
}

console.log(sumofTwoNumbers([1,2,3,4,5], 6));
console.log()