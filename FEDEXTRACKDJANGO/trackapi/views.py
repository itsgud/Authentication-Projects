
from rest_framework.views import APIView
from rest_framework.response import Response
# Create your views here.
 
class FedexTrackingView(APIView):
    def get(self,req):
        return Response({"status":"OK"})
