class Phonepay extends Mobile
	{
	@Override
		public void Camera()
		{
			System.out.println("take photo");
			System.out.println("scan");
		}
	public static void main(String[]args)
	{
		Phonepay p1=new Phonepay();
		p1.Camera();
	}
	}