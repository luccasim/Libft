#include "ft_mlx.h"

void	ft_mlx_image_fill(t_image *img, int color)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < img->width)
	{
		j = 0;
		while (j < img->height)
		{
			ft_mlx_image_pixel_put(img, i, j, color);
			j++;
		}
		i++;
	}
}