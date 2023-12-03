const obj = {
    myname: 'rizwan',
    age: 29,
    address: 'Rangamati',
    phone: 1794212131
}

const {myname} = obj;

// console.log(myname)
const test = [
    {
        zero : ['hello', 'gelo', {myName: 'rizwan', age:36}],
        one: 1,
    },
    { two: 2},
    {three:3}
]


// console.log(test[0].zero[2].age);
const products= [
    {id:1, name : 'apple', price: 500, color:'golden'},
    {id:1, name : 'samsung', price: 500, color:'black'},
    {id:1, name : 'lenevo', price: 500, color:'green'},
    {id:1, name : 'dell', price: 500, color:'white'},
    {id:1, name : 'xaomi', price: 500, color:'black'},
    {id:1, name : 'mac', price: 500, color:'red'},
    {id:1, name : 'apple', price: 500, color:'black'},
]
const myArray = [1, 2, 3, 4, 5, 6, 7, 8, 9];
const myObj = { name: 'rizwan', age: 36, phone: 1794212131 };
console.log(myArray)

//map
const multipleArray = myArray.map(e => e * 2);
// console.log(multipleArray)
//filter
const filteredArray = myArray.filter(e => e > 4);
// console.log(filteredArray)
// console.log(products.filter(p => p.color == 'black'))


//find
const findArrayElement = myArray.find(e => e == 5);
// console.log(findArrayElement);
const container = document.getElementById('products');
fetch('https://fakestoreapi.com/products/1')
    .then(res => res.json())
    .then(data => {
        // console.log(data)
        let h1 = document.createElement('h2')
        h1.innerText = data.title;
        container.appendChild(h1)
        let p = document.createElement('p')
        p.innerText = data.price;
        container.appendChild(p)
        let img = document.createElement('img')
        img.src = data.image;
        container.appendChild(img)
    
    })
    .catch((err) => {
    console.log(err)
    })

const loadData = async () => {
    const response  = await fetch('https://fakestoreapi.com/products/1')
    const data = await response.json();
    console.log(data)
}

loadData();

