window.onload = function ()
{
	$childBox = document.getElementsByClassName("box").item(0).getElementsByClassName("right");
	$lengthBox = Math.floor((document.getElementsByClassName("box").item(0).childNodes.length)/2);
	for (j=0;j<5;j++)
		(function(i)
		{
			with($childBox.item(i))
			{
				onclick = function()
				{
					for (k=0;k<$lengthBox;k++)
						$childBox.item(k).style.display="none";
					style.display="block";
					onclick = function()
					{
						for (k=0;k<$lengthBox;k++)
							$childBox.item(k).style.display="block";
					}
				}				
			}
		})(j);
}
