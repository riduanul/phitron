function getConvertedValue(id, element) {
    if (element == 'innerText') {
    let value = document.getElementById(id).innerText;
    return parseInt(value)
        
    } else {
    let value = document.getElementById(id).value;
    return parseInt(value) 
    }
}

function setInnerText(id, value) {
    document.getElementById(id).innerText = value;
}



function handleDeposit() {
    let conVertedAmount = getConvertedValue('deposit', 'value');
    let convertedDepositText = getConvertedValue('deposit-amount', 'innerText')
    let sum = convertedDepositText + conVertedAmount;
    setInnerText('deposit-amount', sum);

    let convertedTotalAmount = getConvertedValue('total-amount', 'innerText');
    let totalSum = conVertedAmount + convertedTotalAmount;
    setInnerText('total-amount', totalSum);
    document.getElementById('deposit').value = '';
}



function handleWithdraw() {
    let amount = getConvertedValue('withdraw', 'value');
    let convertedWithDrawAmount = getConvertedValue('withdraw-amount', 'innerText');
    let convertedTotalAmount = getConvertedValue('total-amount', 'innerText');
    
    if (convertedTotalAmount >= amount) {
        let sum = convertedWithDrawAmount + amount;
        setInnerText('withdraw-amount', sum)
    } else {
       alert(`Insufficient Balance! Your current Balance is ${convertedTotalAmount}`)
    }
    
    let balance = convertedTotalAmount - amount;
    setInnerText('total-amount', balance);
    
    document.getElementById('withdraw').value = '';

    
}

