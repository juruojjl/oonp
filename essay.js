function randomNum(minNum,maxNum)
{ 
    switch(arguments.length){ 
        case 1: 
            return parseInt(Math.random()*minNum+1,10); 
        break; 
        case 2: 
            return parseInt(Math.random()*(maxNum-minNum+1)+minNum,10); 
        break; 
            default: 
                return 0; 
            break; 
    } 
}
function start()
{
	var essay=new Array("","jjl太蒻了","愣着干啥，还不去Djjl这个大蒟蒻？？？","<img src='ioiaki.PNG'>","众所周知jjl是辣鸡","JJA AK jjl!!!","所有人都是大佬，除了jjl","jjl那么菜，AFO罢（无慈悲）","若不是各路大佬相助，jjl到现在还不知道除数不能为0","像jjl这么菜的辣鸡为什么能进集训队...","这只jjl太菜了，封了罢");
	var num=randomNum(1,10);
	document.getElementById('essay').innerHTML=essay[num];
}
