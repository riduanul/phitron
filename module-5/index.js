
function oddEven(num) {
    if (num != 0 && num % 2 === 0) {
        console.log(`${num} is an Even Number`)
    } else {
        console.log(`${num} is an Odd Number`)
        
    }
}

const arr = [3, 6, 2, 1, 7, 10];
let sortedArray = [];
for (let i = 0; i < arr.length; i++){
    
}

let friends = ['rahim', 'karim', 'jakir', 'jahangir'];

let len = friends[0];

for (const friend of friends) {
    if (friend.length > len.length) {
        len = friend;
    }
}

console.log(len);
console.log(oddEven(10));