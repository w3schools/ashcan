$(function(){
	$(".box > .right").click(function(){
		$cur = $(".box .right").index(this);
		for (i=0;i<$(".box").children().length-1;i++){
			if (i==$cur)
				continue ;
			$(".box .right").eq(i).stop().toggle(700);
		}
		$(".content").css("display",
			($(".content").css("display")=="block")
			?/*if (condition==True)*/
				(function(){
					$("ul").stop().hide(500);
					return "none";
				})()
			:/* else */
				(function(){
					$("ul").slideDown(1000);
					return "block";
				})()
			);
	});
	$(".box > .right ul li a").click(function(events){
		//alert($(this).text());
		events.stopImmediatePropagation();//stop other events
		//events.preventDefault();
	});
});
