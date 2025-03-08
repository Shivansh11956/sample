let city = 'Jaipur';
const API_key = "256eb5ed119a46116d7d8d833b9fa4b2";
const url = `https://api.openweathermap.org/data/2.5/weather?q=${city}&appid=${API_key}`;
async function fetchdata(){
    let res  = await fetch(url); 
    // console.log(res);
    let data = await res.json();
    console.log(data);
}

fetchdata();