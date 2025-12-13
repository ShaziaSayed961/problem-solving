function missingNumbers(arr, brr) {
  const counts = {};
  arr.forEach(el => counts[el] = counts[el] ? counts[el] + 1 : 1);
  const counts1 = {};
  brr.forEach(el => counts1[el] = counts1[el] ? counts1[el] + 1 : 1);
  
  let newarr=[]
  

for (let key in counts1) {
  
  if(counts.hasOwnProperty(key)){
  if (counts[key] !== counts1[key]) {
    newarr.push(parseInt(key))
  }
  }else{
      newarr.push(parseInt(key))
    
  }
 
}
return newarr
}

console.log(missingNumbers([203, 204 ,205, 206, 207, 208, 203 ,204 ,205 ,206]
, [203, 204 ,204 ,205 ,206 ,207, 205 ,208 ,203 ,206 ,205, 206 ,204]));//204,205,206