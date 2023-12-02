let title = document.getElementById('title');
title.style.color = 'green';
// console.log(title)
var child = document.getElementsByClassName('heading')
// console.log(child[0])

document.getElementById('title').style.removeProperty('color')

var img = document.getElementById('myImage');
var att = img.setAttribute('alt', 'myImage');
var hero = document.getElementById('hero')
// console.log(hero.innerText)
var input = document.getElementById('input')
// console.log(input.value)
var testDiv = document.getElementsByClassName("test")
// console.log(testDiv[0].childNodes[1].parentNode.parentNode.parentNode.childNodes[5])

function createElem(){
    var p = document.createElement('p');
p.innerText = 'new p tag';
var newDiv = document.getElementById('newDiv');
newDiv.appendChild(p);
console.log(newDiv)
}



let btn = document.getElementById('submitBtn');
btn.addEventListener('click', function (e) {
    var inputValue = document.getElementById('input');
    console.log(inputValue.value)
})

function onChange(e) {
    console.log(e.target.value)
}

function click() {
    
}