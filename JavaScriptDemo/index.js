import React,{ useState, useEffect} from 'react';


function TimeNow(){

var time = new Date();

const [time, setTime] = useState(time);

useEffect(()=>
{

    const time = setInterval(()=>setTime(new Date(), 1000)
    );
    return(<div><h1>Digital Clock</h1><p>{time.ToTimeString()}</p></div>);


},[time]);

}
export default TimeNow;



