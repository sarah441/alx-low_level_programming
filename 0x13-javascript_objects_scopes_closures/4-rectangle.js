#!/usr/bin/node
module.exports = class Rectangle
{
	constructor (w, h)
	{
		if (w > 0 && h > 0)
		{
			this.width = w;
			this.height = h;
		}
	}


print()
	{
		for (let i = 0; i < this.height; i++)
		{
			let my_art = '';
			for (let j = 0; j < this.width; j++)
			{
				my_art += 'X';
			}
			console.log(my_art);
		}
	}


rotate ()
	{
		let replac = 0;
		replac = this.width;
		this.width = this.height;
		this.height = replac;
	}

	double ()
	{
		this.width *= 2;
		this.height *= 2;
	}
};
